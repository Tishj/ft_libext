/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strndup.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 01:54:34 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/13 11:47:27 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

char	*ft_strndup(char *str, size_t n)
{
	size_t	len;
	size_t	i;
	char	*new;

	i = 0;
	len = ft_strnlen(str, n);
	new = ft_calloc(sizeof(char), (len + 1));
	while (i < len)
	{
		new[i] = str[i];
		i++;
	}
	new[i] = 0;
	return (new);
}
