/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strwlen.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 01:21:08 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/12 11:34:49 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

size_t	ft_strwlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] && !(ft_chrmatchw(str[i])))
		i++;
	return (i);
}
