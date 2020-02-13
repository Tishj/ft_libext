/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strslenc.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/11 23:32:11 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/13 16:52:56 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

size_t	ft_strslenc(char *str, char *set, char c)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (str[i] && (!ft_chrmatchs(str[i], set)))
	{
		if (ft_chrmatchc(str[i], c) == 1)
			len++;
		i++;
	}
	return (len);
}
