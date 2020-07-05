/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   parse.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/23 17:28:13 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/07/05 15:07:32 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"
#include <stdio.h>
#include "ft_printf.h"
#define ERROR -1

static void	parseflag(t_pfdata *data, t_pfconv *conv)
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

static int	convert(t_pfdata *data, t_pfconv *conv)
{
	t_convf			funct;
	static t_convf	conversions[] = {
	[STR] = conv_str,
	[CHR] = conv_chr,
	[DIG] = conv_di,
	[INT] = conv_di,
	[OCT] = conv_uint,
	[UINT] = conv_uint,
	[HEXL] = conv_uint,
	[HEXU] = conv_uint,
	[PTR] = conv_ulong,
	[PCT] = conv_chr,
	[L_UINT] = conv_ulong,
	};

	funct = conversions[(int)conv->conversion];
	return (funct(data, conv));
}

static int	conv_get(t_pfdata *data)
{
	int			conv;
	const char	*conversions[] = {
	[STR] = "s",
	[CHR] = "c",
	[DIG] = "d",
	[INT] = "i",
	[OCT] = "o",
	[UINT] = "u",
	[HEXL] = "x",
	[HEXU] = "X",
	[PTR] = "p",
	[L_UINT] = "lu",
	[PCT] = "%",
	[CONV_SIZE] = NULL,
	};

	conv = ft_str2ncmpstr((char **)conversions, data->arg);
	if (conv != -1)
		data->arg += ft_strlen((char *)conversions[conv]);
	return (conv);
}

int			parseconv(t_pfdata *data)
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
	if (ft_chrmatchs(*data->arg, CONVERSION))
		conv.conversion = conv_get(data);
//	debug(&conv);
	return ((conv.conversion != -1) ? convert(data, &conv) : ERROR);
}
