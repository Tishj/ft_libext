/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str2dup.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 01:54:34 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/03/17 21:05:57 by tbruinem      ########   odam.nl         */
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

char		**ft_str2dup(char **str)
{
	size_t	len;
	size_t	i;
	char	**new;

	i = 0;
	len = ft_str2len(str);
	new = ft_calloc(sizeof(char *), len + 1);
	if (!new)
		return (NULL);
	while (i < len)
	{
		new[i] = ft_strdup(str[i]);
		if (!new[i])
			return (ft_cleanup(new));
		i++;
	}
	new[i] = 0;
	return (new);
}
