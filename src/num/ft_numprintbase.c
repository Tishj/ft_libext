/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_numprintbase.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 21:25:53 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/15 13:52:13 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

void	ft_numprintbase(int nb, int base, int minlen)
{
	char	c;

	if (nb != 0 || minlen > 1)
		ft_numprintbase(nb / base, base, minlen - 1);
	c = (nb % base) + '0';
	write(1, &c, 1);
	if (minlen <= 1 && (nb % base) == 0)
		write(1, "\n", 1);
}
