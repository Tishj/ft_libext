/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str2cmpstr.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/23 23:30:24 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/23 23:32:35 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

long long	ft_str2cmpstr(char **str2, char *str)
{
	size_t	i;

	i = 0;
	while (str2[i])
	{
		if (ft_strcmp(str2[i], str) == 0)
			return ((long long)i);
		i++;
	}
	return (-1);
}
