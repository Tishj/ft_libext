/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strwlenb.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/11 23:32:11 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/13 16:50:23 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

size_t	ft_strwlenb(char *str)
{
	size_t	i;
	size_t	len;

	len = 0;
	i = ft_strskipw(str);
	while (str[i])
	{
		len++;
		i += ft_strwlen(str + i);
		i += ft_strskipw(str + i);
	}
	return (len);
}
