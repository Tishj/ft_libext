/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/23 17:28:13 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/04/24 16:03:53 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"
#include <stdio.h>
#include "ft_printf.h"
#define ERROR -1

void	parseflag(t_pfdata *data, t_pfconv *conv)
{
	if (ft_chrmatchc(*data->arg, '-'))
		conv->padtype = BACK;
	if (!conv->precision && ft_chrmatchc(*data->arg, '0'))
		conv->padding = '0';
	else if (ft_chrmatchr(*data->arg, '0', '9'))
	{
		data->arg = (conv->precision) ?
		ft_strnump(data->arg, &conv->maxwidth) - 1 :
		ft_strnump(data->arg, &conv->minwidth) - 1;
	}
	else if (ft_chrmatchc(*data->arg, '.'))
		conv->precision = 1;
	else if (!conv->precision && ft_chrmatchc(*data->arg, '*'))
		conv->minwidth = va_arg(data->list, int);
	else if (conv->precision && ft_chrmatchc(*data->arg, '*'))
		conv->maxwidth = va_arg(data->list, int);
}

void	debug(t_pfconv *conv)
{
	static const char	*convnames[] = {
	[EMPTY] = "EMPTY",
	[STR] = "STR",
	[CHR] = "CHR",
	[DIG] = "DIG",
	[INT] = "INT",
	[HEXU] = "HEXU",
	[HEXL] = "HEXL",
	[PTR] = "PTR",
	[UINT] = "UINT",
	[OCT] = "OCT",
	};

	printf("---CONVERSIONS---:\n");
	printf("MINWIDTH: %d\n", conv->minwidth);
	printf("MAXWIDTH: %d\n", conv->maxwidth);
	printf("TYPE: %s\n", convnames[(int)conv->conversion]);
	printf("PRECISION: %d\n", conv->precision);
	printf("PADDING: %c\n", conv->padding);
	printf("PADTYPE: %d\n", (int)conv->padtype);
}

char	conv_get(t_pfdata *data)
{
	data->arg++;
	if (!ft_strncmp(data->arg - 1, "s", 1))
		return (STR);
	else if (!ft_strncmp(data->arg - 1, "c", 1))
		return (CHR);
	else if (!ft_strncmp(data->arg - 1, "d", 1))
		return (DIG);
	else if (!ft_strncmp(data->arg - 1, "i", 1))
		return (INT);
	else if (!ft_strncmp(data->arg - 1, "o", 1))
		return (OCT);
	else if (!ft_strncmp(data->arg - 1, "u", 1))
		return (UINT);
	else if (!ft_strncmp(data->arg - 1, "x", 1))
		return (HEXL);
	else if (!ft_strncmp(data->arg - 1, "X", 1))
		return (HEXU);
	else if (!ft_strncmp(data->arg - 1, "p", 1))
		return (PTR);
	else
		return (EMPTY);
}

char	*mod_str(char *str, t_pfconv *conv)
{
	size_t	len;
	char	*new;

	if (!str)
		return (mod_str("(null)", conv));
	len = (conv->precision) ? (int)ft_strnlen(str, conv->maxwidth) :
			(int)ft_strlen(str);
	new = ft_strgenc(' ', (conv->minwidth > (int)len) ?
			conv->minwidth : (int)len);
	ft_memcpy((conv->minwidth > (int)len && conv->padtype == FRONT) ?
			new + (conv->minwidth - len) : new, str, len);
	return (new);
}

int		conv_str(t_pfdata *data, t_pfconv *conv)
{
	conv->string = mod_str(va_arg(data->list, char *), conv);
	if (!conv->string)
		conv->string = "(null)";
	data->str = ft_stradd(data->str, conv->string);
	free(conv->string);
	if (data->str)
		return (1);
	return (ERROR);
}

int		conv_chr(t_pfdata *data, t_pfconv *conv)
{
	conv->string = ft_strgenc(' ', (conv->minwidth) ?
											conv->minwidth : 1);
	if (!conv->string)
		return (ERROR);
	conv->string[(conv->minwidth && conv->padtype == FRONT) ?
				conv->minwidth - 1 : 0] = (char)va_arg(data->list, int);
	data->str = ft_stradd(data->str, conv->string);
	free(conv->string);
	if (data->str)
		return (1);
	return (ERROR);
}

char	*numpadding(char *num, t_pfconv *conv, int len)
{
	char	*new;
	char	*dst;

	if (conv->minwidth <= len)
		return (num);
	new = ft_strgenc(' ', conv->minwidth);
	if (!new)
		return (NULL);
	dst = new;
	dst += (conv->padtype == FRONT) ? (conv->minwidth - len) : 0;
	ft_memcpy(dst, num, len);
	free(num);
	return (new);
}

char	*mod_ulong(unsigned long num, t_pfconv *conv, char *base)
{
	conv->maxwidth = (conv->padding == '0') ? conv->maxwidth : 0;
	conv->maxwidth = (conv->padding == ' ' && num == 0) ? 1 : conv->maxwidth;
	conv->string = ft_numstrul_base(num, base, conv->maxwidth);
	if (!conv->string)
		return (NULL);
	conv->string = numpadding(conv->string, conv, ft_strlen(conv->string));
	if (!conv->string)
		return (NULL);
	return (conv->string);
}

char	*mod_di(int num, t_pfconv *conv)
{
	conv->maxwidth = (conv->padding == '0') ? conv->maxwidth : 0;
	conv->maxwidth = (conv->padding == ' ' && num == 0) ? 1 : conv->maxwidth;
	conv->maxwidth += (conv->precision && num < 0) ? 1 : 0;
	conv->string = ft_numstr_base(num, 10, conv->maxwidth);
	if (!conv->string)
		return (NULL);
	conv->string = numpadding(conv->string, conv, ft_strlen(conv->string));
	if (!conv->string)
		return (NULL);
	return (conv->string);
}

char	*mod_uint(unsigned int num, t_pfconv *conv, char *base)
{
	conv->maxwidth = (conv->padding == '0') ? conv->maxwidth : 0;
	conv->maxwidth = (conv->padding == ' ' && num == 0) ? 1 : conv->maxwidth;
	conv->string = ft_numstru_base(num, base, conv->maxwidth);
	if (!conv->string)
		return (NULL);
	conv->string = numpadding(conv->string, conv, ft_strlen(conv->string));
	if (!conv->string)
		return (NULL);
	return (conv->string);
}

int		conv_di(t_pfdata *data, t_pfconv *conv)
{
	conv->string = mod_di((int)va_arg(data->list, int), conv);
	if (!conv->string)
		return (ERROR);
	data->str = ft_stradd(data->str, conv->string);
	free(conv->string);
	if (data->str)
		return (ft_strlen(conv->string));
	return (ERROR);
}

int		conv_oct(t_pfdata *data, t_pfconv *conv)
{
	conv->string = mod_uint(va_arg(data->list, unsigned int),
					conv, "01234567");
	if (!conv->string)
		return (ERROR);
	data->str = ft_stradd(data->str, conv->string);
	if (data->str)
		return (ft_strlen(conv->string));
	return (ERROR);
}

int		conv_hexl(t_pfdata *data, t_pfconv *conv)
{
	conv->string = mod_uint(va_arg(data->list, unsigned int),
					conv, "0123456789abcdef");
	if (!conv->string)
		return (ERROR);
	data->str = ft_stradd(data->str, conv->string);
	if (data->str)
		return (ft_strlen(conv->string));
	return (ERROR);
}

int		conv_hexu(t_pfdata *data, t_pfconv *conv)
{
	conv->string = mod_uint(va_arg(data->list, unsigned int),
					conv, "0123456789ABCDEF");
	if (!conv->string)
		return (ERROR);
	data->str = ft_stradd(data->str, conv->string);
	if (data->str)
		return (ft_strlen(conv->string));
	return (ERROR);
}

int		conv_uint(t_pfdata *data, t_pfconv *conv)
{
	conv->string = mod_uint(va_arg(data->list, unsigned int),
					conv, "0123456789");
	if (!conv->string)
		return (ERROR);
	data->str = ft_stradd(data->str, conv->string);
	free(conv->string);
	if (data->str)
		return (ft_strlen(conv->string));
	return (ERROR);
}

int		conv_ptr(t_pfdata *data, t_pfconv *conv)
{
	conv->string = mod_ulong(va_arg(data->list, unsigned long),
					conv, "0123456789abcdef");
	if (!conv->string)
		return (ERROR);
	data->str = ft_stradd(data->str, "0x");
	data->str = ft_stradd(data->str, conv->string);
	if (data->str)
		return (ft_strlen(conv->string));
	return (ERROR);
}

int		convert(t_pfdata *data, t_pfconv *conv)
{
	t_convf			funct;
	static t_convf	conversions[] = {
	[STR] = conv_str,
	[CHR] = conv_chr,
	[DIG] = conv_di,
	[INT] = conv_di,
	[OCT] = conv_oct,
	[UINT] = conv_uint,
	[HEXL] = conv_hexl,
	[HEXU] = conv_hexu,
	[PTR] = conv_ptr
	};

	funct = conversions[(int)conv->conversion];
	return (funct(data, conv));
}

int		parseconv(t_pfdata *data)
{
	t_pfconv	conv;

	conv = (t_pfconv){0};
	data->arg++;
	conv.padding = ' ';
	while (*data->arg && !ft_chrmatchs(*data->arg, CONVERSION))
	{
		if (!ft_chrmatchs(*data->arg, FLAG))
			return (ERROR);
		parseflag(data, &conv);
		data->arg++;
	}
	conv.padtype = (conv.minwidth < 0) ? BACK : FRONT;
	conv.minwidth *= (conv.minwidth < 0) ? -1 : 1;
	conv.padding = (conv.maxwidth < 0) ? conv.padding : '0';
	conv.maxwidth *= (conv.maxwidth < 0) ? -1 : 1;
	if (ft_chrmatchs(*data->arg, CONVERSION))
		conv.conversion = conv_get(data);
	return ((conv.conversion) ? convert(data, &conv) : ERROR);
}

int		program_end(char *str, int ret)
{
	if (!str)
		ret = ERROR;
	if (ret == ERROR && str)
		free(str);
	if (str)
	{
		ret = ft_strlen(str);
		write(1, str, ret);
	}
	return (ret);
}

int		ft_printf(char *arguments, ...)
{
	t_pfdata	data;

	data = (t_pfdata){0};
	va_start(data.list, arguments);
	data.arg = arguments;
	while (*data.arg)
	{
		if (*data.arg == '%')
			data.ret = parseconv(&data);
		else
		{
			data.str = ft_strnadd(data.str, data.arg,
						ft_strclen(data.arg, '%'));
			data.arg += ft_strclen(data.arg, '%');
		}
		if (data.ret == ERROR)
			break ;
	}
	va_end(data.list);
	return (program_end(data.str, data.ret));
}
