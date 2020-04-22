/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_numlenu_base.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/17 23:32:58 by tbruinem       #+#    #+#                */
/*   Updated: 2020/03/18 00:17:43 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

size_t	ft_numlenu_base(unsigned int num, int base)
{
	size_t			i;

	i = 0;
	while (num > 0)
	{
		num /= base;
		i++;
	}
	return (i);
}
