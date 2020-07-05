/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memslen.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/24 18:44:30 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/02/24 18:48:53 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

size_t	ft_memslen(void *mem, char *set, size_t n)
{
	size_t	i;
	char	*bytes;

	bytes = (char *)mem;
	i = 0;
	while (i < n && ft_chrmatchs(bytes[i], set))
		i++;
	return (i);
}
