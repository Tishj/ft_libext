/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_numprint.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 21:25:53 by tbruinem       #+#    #+#                */
/*   Updated: 2020/03/17 21:43:17 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

void	ft_numprint(int nb)
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
	if ((int)num >= 10)
		ft_numprint((int)num / 10);
	c = (num % 10) + '0';
	write(1, &c, 1);
}
