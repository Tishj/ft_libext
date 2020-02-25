/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/24 19:50:34 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/24 22:13:02 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

typedef struct	s_pfdata
{
	char		*arg;
	int			ret;
	char		*str;
	va_list		list;
}				t_pfdata;

typedef struct	s_pfconv
{
	char		conversion;
	size_t		index;
	char		padding;
	int			minwidth;
	int			maxwidth;
	int			precision;
	char		*string;
}				t_pfconv;

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
	if (!ft_strcmp(data->arg, "s"))
		return (STR);
	if (!ft_strcmp(data->arg, "c"))
		return (CHR);
	if (!ft_strcmp(data->arg, "d"))
		return (DIG);
	if (!ft_strcmp(data->arg, "i"))
		return (INT);
	if (!ft_strcmp(data->arg, "o"))
		return (OCT);
	if (!ft_strcmp(data->arg, "u"))
		return (UINT);
	if (!ft_strcmp(data->arg, "x"))
		return (HEXL);
	if (!ft_strcmp(data->arg, "X"))
		return (HEXU);
	if (!ft_strcmp(data->arg, "p"))
		return (PTR);
}

int		ft_conv_and_print(t_pfdata *data, t_pfconv *conv)
{


}

int		ft_parseconv(t_pfdata *data)
{
	t_pfconv	conv;

	conv = (t_pfconv){0};
	while (*data->arg && !ft_chrmatchs(*data->arg, CONVERSION))
	{
		if (ft_chrmatchs(*data->arg, FLAG))
			ft_parseflag(data, &conv);
		else
			return (-1);
		data->arg++;
	}
	if (ft_chrmatchs(*data->arg, CONVERSION))
		conv.conversion = ft_conv_get(data);
	return ((conv.conversion) ? ft_conv_and_print(data, &conv) : -1);
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
		{
			data.arg++;
			data.ret = ft_parseconv(&data);
		}
		else
			data.str = ft_strnadd(data.str, data.arg,
						ft_strclen(data.arg, '%'));
		if (data.ret == -1)
			break ;
	}
	va_end(data.list);
	return (data.ret);
}
