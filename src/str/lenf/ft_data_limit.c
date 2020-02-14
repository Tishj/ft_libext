/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_data_limit.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/14 11:51:01 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/14 12:24:05 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

size_t	ft_data_limit(t_data *data, va_list list, char *str)
{
	static const char	whitespaces[] = {0x09,0x0A,0x0B,0x0C,0x0D,' ','\0'};

	if (ft_chrmatchc(*str, 'n'))
		data->lnum = (size_t)va_arg(list, int);
	else if (ft_chrmatchc(*str, 'c'))
		data->limit = ft_straddc(data->limit, va_arg(list, int));
	else if (ft_chrmatchc(*str, 's'))
		data->limit = ft_stradd(data->limit, va_arg(list, char *));
	else if (ft_chrmatchc(*str, 'r'))
		data->limit = ft_straddr(data->limit, va_arg(list, int),
		va_arg(list, int));
	else if (ft_chrmatchc(*str, 'w'))
		data->limit = ft_stradd(data->limit, (char *)whitespaces);
	return (1);
}
