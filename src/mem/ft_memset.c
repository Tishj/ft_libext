/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 11:41:40 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/12 11:43:18 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

void	ft_memset(void *mem, size_t len, char c)
{
	size_t	i;
	char	*bytes;

	bytes = (char *)mem;
	i = 0;
	while (i < len)
	{
		bytes[i] = c;
		i++;
	}
}
