/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrlens.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/11 23:32:11 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/12 00:12:45 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

size_t	ft_strrlens(char *str, char rstart, char rend, char *set)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (str[i] && !(str[i] >= rstart && str[i] <= rend))
	{
		if (ft_chrmatchs(str[i], set) == 1)
			len++;
		i++;
	}
	return (len);
}
