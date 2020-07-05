/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_chrprintfds.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 22:20:51 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/07/04 23:23:44 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

int		ft_chrprintfds(char c, int fd, char *set)
{
	if (ft_chrmatchs(c, set))
		return (write(fd, &c, 1));
	return (0);
}
