/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_chrprintfdc.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 22:20:51 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/07/04 23:23:42 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

int		ft_chrprintfdc(char c, char yes, int fd)
{
	if (c == yes)
		return (write(fd, &c, 1));
	return (0);
}
