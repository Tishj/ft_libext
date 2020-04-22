/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_numlen_base.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/17 23:32:58 by tbruinem       #+#    #+#                */
/*   Updated: 2020/03/17 23:39:44 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

size_t	ft_numlen_base(int num, int base)
{
	size_t			i;
	unsigned int	nb;

	i = (num <= 0) ? 1 : 0;
	nb = (num < 0) ? num * -1 : num;
	while (nb > 0)
	{
		nb /= base;
		i++;
	}
	return (i);
}
