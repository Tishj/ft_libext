/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_data_limit.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/14 11:51:01 by tbruinem       #+#    #+#                */
/*   Updated: 2020/03/17 21:41:40 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"
#include "lenf.h"

size_t	ft_data_limit(t_lenf *data, va_list list, char *str)
{
	static const char	whitespaces[] = "\t\n\v\f\r ";
	char				rstart;
	char				rend;

	if (ft_chrmatchc(*str, 'n'))
		data->lnum = (size_t)va_arg(list, int);
	else if (ft_chrmatchc(*str, 'c'))
		data->limit = ft_straddc(data->limit, va_arg(list, int));
	else if (ft_chrmatchc(*str, 's'))
		data->limit = ft_stradd(data->limit, va_arg(list, char *));
	else if (ft_chrmatchc(*str, 'r'))
	{
		rstart = va_arg(list, int);
		rend = va_arg(list, int);
		data->limit = ft_straddr(data->limit, rstart, rend);
	}
	else if (ft_chrmatchc(*str, 'w'))
		data->limit = ft_stradd(data->limit, (char *)whitespaces);
	return (1);
}
