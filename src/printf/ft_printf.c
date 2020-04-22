/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/24 19:50:34 by tbruinem       #+#    #+#                */
/*   Updated: 2020/03/18 01:12:07 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"
#include "ft_printf.h"

#define ERROR -1

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
	ft_strprint(data->arg);
	if (!ft_strcmp(data->arg, "s"))
		return (STR);
	else if (!ft_strcmp(data->arg, "c"))
		return (CHR);
	else if (!ft_strcmp(data->arg, "d"))
		return (DIG);
	else if (!ft_strcmp(data->arg, "i"))
		return (INT);
	else if (!ft_strcmp(data->arg, "o"))
		return (OCT);
	else if (!ft_strcmp(data->arg, "u"))
		return (UINT);
	else if (!ft_strcmp(data->arg, "x"))
		return (HEXL);
	else if (!ft_strcmp(data->arg, "X"))
		return (HEXU);
	else if (!ft_strcmp(data->arg, "p"))
		return (PTR);
	else
		return (EMPTY);
}

int		ft_conv_str(t_pfdata *data, t_pfconv *conv)
{
	conv->string = ft_strdup(va_arg(data->list, char*));
	data->str = ft_stradd(data->str, conv->string);
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
	conv->string = ft_numstr_base((char)va_arg(data->list, int), 1);
	if (!conv->string)
		return (ERROR);
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
	conv->string = ft_numstru_base(va_arg(data->list, unsigned long), "0123456789abcdef");
	if (!conv->string)
		return (ERROR);
	data->str = ft_stradd(data->str, conv->string);
	if (data->str)
		return (ft_strlen(conv->string));
	return (ERROR);
}

int		ft_convert(t_pfdata *data, t_pfconv *conv)
{
	t_convf	funct;
	t_convf	conversions[] = {
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

	printf("CONVERSION: %d\n", conv->conversion);
	funct = conversions[(int)conv->conversion];
	return (funct(data, conv));
}

int		ft_parseconv(t_pfdata *data)
{
	t_pfconv	conv;

	conv = (t_pfconv){0};
	while (*data->arg && !ft_chrmatchs(*data->arg, CONVERSION))
	{
		printf("ARG[i] = %c\n", *data->arg);
		if (ft_chrmatchs(*data->arg, FLAG))
			ft_parseflag(data, &conv);
		else
			return (ERROR);
		data->arg++;
	}
	ft_strprint(data->arg);
	if (ft_chrmatchs(*data->arg, CONVERSION))
	{
		printf("yes\n");
		conv.conversion = ft_conv_get(data);
		printf("conv: %c\n", conv.conversion + '0');
	}
	return ((conv.conversion) ? ft_convert(data, &conv) : ERROR);
}

int		ft_printf(char *arguments, ...)
{
	t_pfdata	data;

	data = (t_pfdata){0};
	va_start(data.list, arguments);
	ft_strprint(arguments);
	data.arg = arguments;
	while (*data.arg)
	{
		if (*data.arg == '%')
		{
			data.arg++;
			data.ret = ft_parseconv(&data);
		}
		else
			data.str = ft_strnadd(data.str, data.arg,
						ft_strclen(data.arg, '%'));
		if (data.ret == ERROR)
			break ;
	}
	va_end(data.list);
	ft_strprint(data.str);
	return ((data.ret == -1) ? -1 : (int)ft_strlen(data.str));
}
