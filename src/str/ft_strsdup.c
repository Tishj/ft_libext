/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strsdup.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 01:54:34 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/12 15:18:46 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

char	*ft_strsdup(char *str, char *set)
{
	size_t	len;
	size_t	i;
	char	*new;

	i = 0;
	len = ft_strslen(str, set);
	new = ft_calloc(sizeof(char),(len + 1));
	while (i < len)
	{
		new[i] = str[i];
		i++;
	}
	new[i] = 0;
	return (new);
}
