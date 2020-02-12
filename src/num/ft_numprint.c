/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_numprint.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 21:25:53 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/12 21:27:28 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

void	ft_numprint(int nb)
{
	char	c;

	if (nb != 0)
		ft_numprint(nb / 10);
	c = nb % 10;
	write(1, &c, 1);
}
