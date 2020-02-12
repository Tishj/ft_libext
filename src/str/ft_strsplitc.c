/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strsplitc.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 01:48:56 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/12 12:43:55 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

char	**ft_strsplitc(char *str, char c)
{
	size_t	len;
	size_t	i;
	size_t	n;
	char	**new;

	i = 0;
	n = 0;
	len = ft_strclenb(str, c);
	new = ft_calloc(sizeof(char *) * (len + 1));
	while (n < len)
	{
		new[n] = ft_strcdup(str, c);
		str += ft_strclen(str, c);
		str += ft_strskipc(str, c);
		n++;
	}
	new[n] = 0;
	return (new);
}
