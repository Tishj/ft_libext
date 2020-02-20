/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrimsf.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 14:41:37 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/20 22:06:09 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

char	*ft_strtrimsf(char *str, char *set)
{
	size_t	len;
	char	*new;
	size_t	i;

	i = 0;
	len = ft_strlen(str) - ft_strlens(str, set);
	new = ft_calloc(sizeof(char), (len + 1));
	if (!new)
		return (NULL);
	while (str[i])
	{
		i += ft_strskips(str, set);
		i += ft_strscat(new, str + i, set) + 1;
	}
	return (new);
}
