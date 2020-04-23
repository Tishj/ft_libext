/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/24 19:50:34 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/04/23 12:01:15 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"
#include <stdio.h>
#include "ft_printf.h"

#define ERROR -1

const char	*convnames[] = {
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

void	parseflag(t_pfdata *data, t_pfconv *conv)
{
	if (ft_chrmatchc(*data->arg, '-'))
		conv->padtype = BACK;
	if (!conv->precision && ft_chrmatchc(*data->arg, '0'))
		conv->padding = '0';
	else if (ft_chrmatchr(*data->arg, '0', '9'))
	{
//		printf("before: min:%d | max: %d\n", conv->minwidth, conv->maxwidth);
		data->arg = (conv->precision) ?
		ft_strnump(data->arg, &conv->maxwidth) - 1 :
		ft_strnump(data->arg, &conv->minwidth) - 1;
//		printf("after: min:%d | max: %d\n", conv->minwidth, conv->maxwidth);
	}
	else if (ft_chrmatchc(*data->arg, '.'))
		conv->precision = 1;
	else if (ft_chrmatchc(*data->arg, '*'))
	{
		conv->maxwidth = (conv->precision && !conv->maxwidth) ?
		va_arg(data->list, int) : 0;
		conv->minwidth = (!conv->precision && !conv->minwidth) ?
		va_arg(data->list, int) : 0;
	}
}

void	debug(t_pfconv *conv)
{
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
//	strprint(data->arg);
	if (!ft_strncmp(data->arg, "s", 1))
		return (STR);
	else if (!ft_strncmp(data->arg, "c", 1))
		return (CHR);
	else if (!ft_strncmp(data->arg, "d", 1))
		return (DIG);
	else if (!ft_strncmp(data->arg, "i", 1))
		return (INT);
	else if (!ft_strncmp(data->arg, "o", 1))
		return (OCT);
	else if (!ft_strncmp(data->arg, "u", 1))
		return (UINT);
	else if (!ft_strncmp(data->arg, "x", 1))
		return (HEXL);
	else if (!ft_strncmp(data->arg, "X", 1))
		return (HEXU);
	else if (!ft_strncmp(data->arg, "p", 1))
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
	len = (conv->precision) ? (int)ft_strnlen(str, conv->maxwidth) : (int)ft_strlen(str);
	new = ft_strgenc(conv->padding, (conv->minwidth > (int)len) ? conv->minwidth : (int)len);
	ft_memcpy((conv->minwidth > (int)len && conv->padtype == FRONT) ? new + (conv->minwidth - len) : new, str, len);
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
	conv->string = ft_strgenc((char)va_arg(data->list, int), 1);
	if (!conv->string)
		return (ERROR);
	data->str = ft_stradd(data->str, conv->string);
	if (data->str)
		return (1);
	return (ERROR);
}

int		conv_di(t_pfdata *data, t_pfconv *conv)
{
	conv->string = ft_numstr_base((char)va_arg(data->list, int), 10);
	if (!conv->string)
		return (ERROR);
	printf("STR: %s\n", conv->string);
	data->str = ft_stradd(data->str, conv->string);
	if (data->str)
		return (ft_strlen(conv->string));
	return (ERROR);
}

int		conv_oct(t_pfdata *data, t_pfconv *conv)
{
	conv->string = ft_numstru_base(va_arg(data->list, unsigned int), "01234567");
	if (!conv->string)
		return (ERROR);
	data->str = ft_stradd(data->str, conv->string);
	if (data->str)
		return (ft_strlen(conv->string));
	return (ERROR);
}

int		conv_hexl(t_pfdata *data, t_pfconv *conv)
{
	conv->string = ft_numstru_base(va_arg(data->list, unsigned int), "0123456789abcdef");
	if (!conv->string)
		return (ERROR);
	data->str = ft_stradd(data->str, conv->string);
	if (data->str)
		return (ft_strlen(conv->string));
	return (ERROR);
}

int		conv_hexu(t_pfdata *data, t_pfconv *conv)
{
	conv->string = ft_numstru_base(va_arg(data->list, unsigned int), "0123456789ABCDEF");
	if (!conv->string)
		return (ERROR);
	data->str = ft_stradd(data->str, conv->string);
	if (data->str)
		return (ft_strlen(conv->string));
	return (ERROR);
}

int		conv_uint(t_pfdata *data, t_pfconv *conv)
{
	conv->string = ft_numstru_base(va_arg(data->list, unsigned int), "0123456789");
	if (!conv->string)
		return (ERROR);
	data->str = ft_stradd(data->str, conv->string);
	if (data->str)
		return (ft_strlen(conv->string));
	return (ERROR);
}

int		conv_ptr(t_pfdata *data, t_pfconv *conv)
{
	conv->string = ft_numstrul_base(va_arg(data->list, unsigned long), "0123456789abcdef");
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

//	printf("CONVERSION: %s\n", convnames[(int)conv->conversion]);
	funct = conversions[(int)conv->conversion];
	return (funct(data, conv));
}

int		parseconv(t_pfdata *data)
{
	t_pfconv	conv;

	conv = (t_pfconv){0};
	conv.padding = ' ';
	while (*data->arg && !ft_chrmatchs(*data->arg, CONVERSION))
	{
//		printf("data->arg: %c\n", *data->arg);
		if (ft_chrmatchs(*data->arg, FLAG))
			parseflag(data, &conv);
		else
			return (ERROR);
		data->arg++;
	}
	if (ft_chrmatchs(*data->arg, CONVERSION))
	{
		conv.conversion = conv_get(data);
		data->arg++;
	}
//	debug(&conv);
	return ((conv.conversion) ? convert(data, &conv) : ERROR);
}

int		ft_printf(char *arguments, ...)
{
	t_pfdata	data;

	data = (t_pfdata){0};
	va_start(data.list, arguments);
//	printf("argstring: %s\n", arguments);
	data.arg = arguments;
	while (*data.arg)
	{
		if (*data.arg == '%')
		{
			data.arg++;
			data.ret = parseconv(&data);
		}
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
	write(1, data.str, ft_strlen(data.str));
	return ((data.ret == ERROR) ? ERROR : (int)ft_strlen(data.str));
}
