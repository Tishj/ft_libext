/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memclen.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/24 18:44:30 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/24 18:48:39 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

size_t	ft_memclen(void *mem, char c, size_t n)
{
	size_t	i;
	char	*bytes;

	bytes = (char *)mem;
	i = 0;
	while (i < n && ft_chrmatchc(bytes[i], c))
		i++;
	return (i);
}
