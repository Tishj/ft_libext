/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 20:25:07 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/22 13:43:16 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

char	*ft_strnstr(char *str, char *ndl, size_t n)
{
	size_t	i;
	size_t	len;
	size_t	nlen;

	if (!ndl || !str)
		return (NULL);
	len = ft_strlen(str);
	nlen = ft_strlen(ndl);
	i = 0;
	while ((i < len && i + (nlen - 1) < n) && str[i])
	{
		if (str[i] != ndl[0])
			i += ft_strclen(str + i, ndl[0]);
		if (!ft_strncmp(str + i, ndl, nlen))
			return (str + i);
		i++;
	}
	return (NULL);
}
