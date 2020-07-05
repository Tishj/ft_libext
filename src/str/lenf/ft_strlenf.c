/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlenf.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/14 10:18:17 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/03/17 21:41:52 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"
#include "lenf.h"

size_t	ft_strlenf(char *str, char *args, ...)
{
	size_t	i;
	va_list	list;
	t_lenf	data;

	va_start(list, args);
	ft_data_init(&data);
	i = 0;
	while (args[i])
		i += ft_data_parse(&data, list, &args[i]);
	ft_debug(&data);
	return (ft_len(&data, str));
}
