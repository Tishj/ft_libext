/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_chrprint.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 22:20:51 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/07/04 23:23:32 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

int		ft_chrprint(char c)
{
	return (write(1, &c, 1));
}
