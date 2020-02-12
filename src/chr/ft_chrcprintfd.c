/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_chrcprintfd.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 22:20:51 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/12 22:22:51 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

int		ft_chrcprintfd(char c, char nope, int fd)
{
	if (c != nope)
		return (write(fd, &c, 1));
	return (0);
}
