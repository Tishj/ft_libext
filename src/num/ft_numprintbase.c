/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_numprintbase.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 21:25:53 by tbruinem       #+#    #+#                */
/*   Updated: 2020/03/17 21:43:11 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

void	ft_numprintbase(int nb, int base)
{
	char			c;
	unsigned int	num; 

	if (nb < 0)
	{
		write(1, "-", 1);
		num = nb * -1;
	}
	else
		num = nb;
	if ((int)num >= base)
		ft_numprintbase((int)num / base, base);
	c = (num % base) + '0';
	write(1, &c, 1);
}
