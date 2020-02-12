/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_chrsprint.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 22:20:51 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/12 22:24:28 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

int		ft_chrsprint(char c, char *set)
{
	if (!(ft_chrmatchs(c, set)))
		return (write(1, &c, 1));
	return (0);
}
