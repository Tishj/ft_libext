/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 20:25:07 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/22 13:43:22 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

char	*ft_strstr(char *str, char *ndl)
{
	size_t	i;
	size_t	len;

	if (!ndl || !str)
		return (NULL);
	len = ft_strlen(str);
	i = 0;
	while (i < len && str[i])
	{
		if (str[i] != ndl[0])
			i += ft_strclen(str + i, ndl[0]);
		if (!ft_strncmp(str + i, ndl, ft_strlen(ndl)))
			return (str + i);
		i++;
	}
	return (NULL);
}
