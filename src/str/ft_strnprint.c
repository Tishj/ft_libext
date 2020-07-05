/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnprint.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 01:58:37 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/02/12 21:24:08 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

void	ft_strnprint(char *str, size_t n)
{
	write(1, str, ft_strnlen(str, n));
	write(1, "\n", 1);
}
