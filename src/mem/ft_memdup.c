/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/24 16:51:30 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/24 18:42:18 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

HEAP	*ft_memdup(void *mem, size_t n)
{
	size_t	i;
	HEAP	*new;
	char	*bytes;

	i = 0;
	if (!mem)
		return (NULL);
	bytes = (char *)mem;
	new = ft_calloc(sizeof(char), n);
	if (!new)
		return (NULL);
	while (i < n)
	{
		*((char *)new + i) = bytes[i];
		i++;
	}
	return (new);
}
