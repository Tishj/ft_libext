/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strsplitw.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 01:48:56 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/12 15:18:59 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

char	**ft_strsplitw(char *str, char c)
{
	size_t	len;
	size_t	i;
	size_t	n;
	char	**new;

	i = 0;
	n = 0;
	len = ft_strlenw(str) + 1;
	new = ft_calloc(sizeof(char *),(len + 1));
	while (n < len)
	{
		new[n] = ft_strwdup(str + i);
		i += ft_strclen(str + i, c) + 1;
		n++;
	}
	new[n] = 0;
	return (new);
}
