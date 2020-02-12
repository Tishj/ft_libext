/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strprint.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 01:58:37 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/12 02:15:42 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

void	ft_strprint(char *str)
{
	write(1, str, ft_strlen(str));
	write(1, "\n", 1);
}
