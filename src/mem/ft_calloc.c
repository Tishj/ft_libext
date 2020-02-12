/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 11:39:07 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/12 11:44:37 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

void	*ft_calloc(size_t len)
{
	char	*new;

	new = malloc(len);
	ft_memset(new, len, 0);
	return (new);
}
