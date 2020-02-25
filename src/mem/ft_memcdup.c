/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcdup.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/24 16:51:30 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/24 18:47:46 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

HEAP	*ft_memcdup(void *mem, size_t n, char c)
{
	size_t	i;
	HEAP	*new;
	char	*bytes;
	char	limit;

	i = 0;
	if (!mem)
		return (NULL);
	limit = ft_memclen(mem, n, c);
	bytes = (char *)mem;
	n = (limit < n) ? limit : n;
	new = ft_calloc(sizeof(char), n);
	if (!new)
		return (NULL);
	while (i < n && bytes[i] != c)
	{
		*((char *)new + i) = bytes[i];
		i++;
	}
	return (new);
}
