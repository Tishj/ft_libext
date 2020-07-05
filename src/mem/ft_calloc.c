/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 11:39:07 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/02/24 11:04:30 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

HEAP	*ft_calloc(size_t size, size_t len)
{
	void	*new;

	len = (!len || !size) ? 1 : len * size;
	new = malloc(len);
	if (!new)
		return (NULL);
	ft_memset(new, len, 0);
	return (new);
}
