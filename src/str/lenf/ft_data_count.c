/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_data_count.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/14 11:51:41 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/21 11:21:47 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

size_t	ft_data_count_excl(t_data *data, va_list list, char *str)
{
	static const char	whitespaces[] = "\t\n\v\f\r ";
	char				rstart;
	char				rend;

	if (!*str)
		return (1);
	if (ft_chrmatchc(*str, 'c'))
		data->exclude = ft_straddc(data->exclude, va_arg(list, int));
	else if (ft_chrmatchc(*str, 's'))
		data->exclude = ft_stradd(data->exclude, va_arg(list, char *));
	else if (ft_chrmatchc(*str, 'r'))
	{
		rstart = va_arg(list, int);
		rend = va_arg(list, int);
		data->exclude = ft_straddr(data->exclude, rstart, rend);
	}
	else if (ft_chrmatchc(*str, 'w'))
		data->exclude = ft_stradd(data->exclude, (char *)whitespaces);
//	else
//		exit(ft_error());
	return (2);
}

size_t	ft_data_count_incl(t_data *data, va_list list, char *str)
{
	static const char	whitespaces[] = "\t\n\v\f\r ";
	char				rstart;
	char				rend;

	if (ft_chrmatchc(*str, 'c'))
		data->include = ft_straddc(data->include, va_arg(list, int));
	else if (ft_chrmatchc(*str, 's'))
		data->include = ft_stradd(data->include, va_arg(list, char *));
	else if (ft_chrmatchc(*str, 'r'))
	{
		rstart = va_arg(list, int);
		rend = va_arg(list, int);
		data->include = ft_straddr(data->include, rstart, rend);
	}
	else if (ft_chrmatchc(*str, 'w'))
		data->include = ft_stradd(data->include, (char *)whitespaces);
//	else
//		exit(ft_error());
	return (1);
}

size_t	ft_data_count(t_data *data, va_list list, char *str)
{
	size_t	i;

	i = 0;
	while (str[i] && ft_chrmatchs(str[i], COUNT))
	{
		if (ft_chrmatchc(str[i], '-'))
			i += ft_data_count_excl(data, list, str + i + 1);
		else
			i += ft_data_count_incl(data, list, str + i);
	}
	return (i);
}
