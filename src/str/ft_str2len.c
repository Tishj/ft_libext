/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str2len.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 01:41:28 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/12 01:42:10 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

size_t	ft_str2len(char **str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
