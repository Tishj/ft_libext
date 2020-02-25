/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/24 16:57:48 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/24 18:41:20 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"
#include <string.h>

void	ft_memmove(void *dst, void *src, size_t n)
{
	unsigned char	*dest;
	unsigned char	*source;
	char			rev;
	size_t			i;

	if (!dst || !src || !n)
		return ;
	rev = (dst > src && src + n > dst);
	i = 0;
	dest = dst;
	source = src;
	while (i < n)
	{
		if (rev)
			dest[(n - 1) - i] = source[(n - 1) - i];
		else
			dest[i] = source[i];
		i++;
	}
}
