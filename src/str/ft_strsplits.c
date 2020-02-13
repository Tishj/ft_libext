/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strsplits.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 01:50:31 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/13 11:47:51 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

char	**ft_strsplits(char *str, char *set)
{
	size_t	len;
	size_t	i;
	size_t	n;
	char	**new;

	i = 0;
	n = 0;
	len = ft_strslenb(str, set);
	new = ft_calloc(sizeof(char *), (len + 1));
	while (n < len)
	{
		new[n] = ft_strsdup(str + i, set);
		i += ft_strslen(str + i, set);
		i += ft_strskips(str + i, set);
		n++;
	}
	new[n] = 0;
	return (new);
}
