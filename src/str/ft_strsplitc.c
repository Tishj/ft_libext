/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strsplitc.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 01:48:56 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/20 22:06:43 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

char	**ft_strsplitc(char *str, char c)
{
	size_t	len;
	size_t	n;
	char	**new;

	n = 0;
	len = ft_strclenb(str, c);
	new = ft_calloc(sizeof(char *), (len + 1));
	if (!new)
		return (NULL);
	str += ft_strskipc(str, c);
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
