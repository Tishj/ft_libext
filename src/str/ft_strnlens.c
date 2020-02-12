/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnlens.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/11 23:32:11 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/12 00:05:42 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

size_t	ft_strnlens(char *str, size_t n, char *set)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (str[i] && i < n)
	{
		if (ft_chrmatchs(str[i], set) == 1)
			len++;
		i++;
	}
	return (len);
}
