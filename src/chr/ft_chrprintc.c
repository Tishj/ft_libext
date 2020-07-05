/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_chrprintc.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 22:20:51 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/07/04 23:23:35 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

int		ft_chrprintc(char c, char yes)
{
	if (c == yes)
		return (write(1, &c, 1));
	return (0);
}
