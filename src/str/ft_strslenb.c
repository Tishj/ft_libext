/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strslenb.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/11 23:32:11 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/12 17:21:56 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

size_t	ft_strslenb(char *str, char *set)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	i += ft_strskips(str + i, set);
	while (str[i])
	{
		len++;
		i += ft_strslen(str + i, set);
		i += ft_strskips(str + i, set);
	}
	return (len);
}
