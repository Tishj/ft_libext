/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str2dup.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 01:54:34 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/13 11:46:05 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

char	**ft_str2dup(char **str)
{
	size_t	len;
	size_t	i;
	char	**new;

	i = 0;
	len = ft_str2len(str);
	new = ft_calloc(sizeof(char *), len + 1);
	while (i < len)
	{
		new[i] = ft_strdup(str[i]);
		i++;
	}
	new[i] = 0;
	return (new);
}
