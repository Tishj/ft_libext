/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/24 19:50:34 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/04/23 00:41:29 by tbruinem      ########   odam.nl         */
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

void	ft_parseflag(t_pfdata *data, t_pfconv *conv)
{
	if (ft_chrmatchc(*data->arg, '0'))
		conv->padding = '0';
	else if (ft_chrmatchr(*data->arg, '0', '9'))
		data->arg = (conv->precision) ?
		ft_strnump(data->arg, &conv->maxwidth) - 1 :
		ft_strnump(data->arg, &conv->minwidth) - 1;
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

char	ft_conv_get(t_pfdata *data)
{
//	ft_strprint(data->arg);
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

int		ft_conv_str(t_pfdata *data, t_pfconv *conv)
{
	conv->string = va_arg(data->list, char *);
	if (!conv->string)
		conv->string = "(NULL)";
	data->str = ft_stradd(data->str, conv->string);
//	printf("DATASTR: %s\n", data->str);
	if (data->str)
		return (1);
	return (ERROR);
}

int		ft_conv_chr(t_pfdata *data, t_pfconv *conv)
{
	conv->string = ft_strgenc((char)va_arg(data->list, int), 1);
	if (!conv->string)
		return (ERROR);
	data->str = ft_stradd(data->str, conv->string);
	if (data->str)
		return (1);
	return (ERROR);
}

int		ft_conv_di(t_pfdata *data, t_pfconv *conv)
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

int		ft_conv_oct(t_pfdata *data, t_pfconv *conv)
{
	conv->string = ft_numstru_base(va_arg(data->list, unsigned int), "01234567");
	if (!conv->string)
		return (ERROR);
	data->str = ft_stradd(data->str, conv->string);
	if (data->str)
		return (ft_strlen(conv->string));
	return (ERROR);
}

int		ft_conv_hexl(t_pfdata *data, t_pfconv *conv)
{
	conv->string = ft_numstru_base(va_arg(data->list, unsigned int), "0123456789abcdef");
	if (!conv->string)
		return (ERROR);
	data->str = ft_stradd(data->str, conv->string);
	if (data->str)
		return (ft_strlen(conv->string));
	return (ERROR);
}

int		ft_conv_hexu(t_pfdata *data, t_pfconv *conv)
{
	conv->string = ft_numstru_base(va_arg(data->list, unsigned int), "0123456789ABCDEF");
	if (!conv->string)
		return (ERROR);
	data->str = ft_stradd(data->str, conv->string);
	if (data->str)
		return (ft_strlen(conv->string));
	return (ERROR);
}

int		ft_conv_uint(t_pfdata *data, t_pfconv *conv)
{
	conv->string = ft_numstru_base(va_arg(data->list, unsigned int), "0123456789");
	if (!conv->string)
		return (ERROR);
	data->str = ft_stradd(data->str, conv->string);
	if (data->str)
		return (ft_strlen(conv->string));
	return (ERROR);
}

int		ft_conv_ptr(t_pfdata *data, t_pfconv *conv)
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

int		ft_convert(t_pfdata *data, t_pfconv *conv)
{
	t_convf			funct;
	static t_convf	conversions[] = {
	[STR] = ft_conv_str,
	[CHR] = ft_conv_chr,
	[DIG] = ft_conv_di,
	[INT] = ft_conv_di,
	[OCT] = ft_conv_oct,
	[UINT] = ft_conv_uint,
	[HEXL] = ft_conv_hexl,
	[HEXU] = ft_conv_hexu,
	[PTR] = ft_conv_ptr
	};

//	printf("CONVERSION: %s\n", convnames[(int)conv->conversion]);
	funct = conversions[(int)conv->conversion];
	return (funct(data, conv));
}

int		ft_parseconv(t_pfdata *data)
{
	t_pfconv	conv;

	conv = (t_pfconv){0};
	while (*data->arg && !ft_chrmatchs(*data->arg, CONVERSION))
	{
		printf("FLAGS = %c\n", *data->arg);
		if (ft_chrmatchs(*data->arg, FLAG))
			ft_parseflag(data, &conv);
		else
			return (ERROR);
		data->arg++;
	}
	if (ft_chrmatchs(*data->arg, CONVERSION))
	{
		conv.conversion = ft_conv_get(data);
		printf("CONV: %s\n", convnames[(int)conv.conversion]);
		data->arg++;
	}
	return ((conv.conversion) ? ft_convert(data, &conv) : ERROR);
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
			data.ret = ft_parseconv(&data);
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
