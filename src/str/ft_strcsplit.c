/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcsplit.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 01:48:56 by tbruinem       #+#    #+#                */
/*   Updated: 2020/03/30 12:23:56 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

static char	**ft_cleanup(char **str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	return (NULL);
}

char		**ft_strcsplit(char *str, char c)
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
		if (!new[n])
			return (ft_cleanup(new));
		str += ft_strclen(str, c);
		str += ft_strskipc(str, c);
		n++;
	}
	new[n] = 0;
	return (new);
}
