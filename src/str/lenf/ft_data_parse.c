/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_data_parse.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/14 10:22:16 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/14 12:17:17 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

size_t	ft_data_base(t_data *data, char *str)
{
	if (ft_chrmatchc(*str, '-'))
		data->mods.base += 1;
	else if (ft_chrmatchc(*str, 'b'))
		data->mods.base += 2;
	return (1);
}

size_t	ft_data_parse(t_data *data, va_list list, char *str)
{
	size_t	i;

	i = 0;
	if (data->count)
	{
		if (!ft_chrmatchs(str[i], COUNT))
			return (1);
		return (ft_data_count(data, list, str));
	}
	else if (ft_chrmatchs(str[i], BASE))
		return (ft_data_base(data, str));
	else if (ft_chrmatchs(str[i], LIMITS))
		return (ft_data_limit(data, list, str));
	else if (ft_chrmatchc(str[i], '.'))
		data->count = 1;
	return (1);
}
