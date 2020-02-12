/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strskips.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 11:56:59 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/12 11:58:50 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

size_t	ft_strskips(char *str, char *set)
{
	size_t	i;

	i = 0;
	while (str[i] && ft_chrmatchs(str[i], set))
		i++;
	return (i);
}
