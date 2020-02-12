/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strwprint.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 01:58:37 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/12 21:23:39 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

void	ft_strwprint(char *str)
{
	write(1, str, ft_strwlen(str));
	write(1, "\n", 1);
}
