/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str2cmpstr.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/23 23:30:24 by tbruinem       #+#    #+#                */
/*   Updated: 2020/03/17 20:28:54 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

/*
**	Find the first occurence in STR2 (char **str2),
**	of STR (char *str);
**
**	Returning either the INDEX of the string in STR2 or -1 for error.
*/

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
