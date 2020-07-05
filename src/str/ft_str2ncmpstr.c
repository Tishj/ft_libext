/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str2ncmpstr.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/23 23:30:24 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/07/04 23:58:40 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

/*
**	Find the first occurence in STR2 (char **str2),
**	of STR (char *str);
**
**	Returning either the INDEX of the string in STR2 or -1 for error.
*/

long long	ft_str2ncmpstr(char **str2, char *str)
{
	size_t	i;
	size_t	size;

	i = 0;
	while (str2[i])
	{
		size = ft_strlen(str2[i]);
		if (ft_strncmp(str2[i], str, size) == 0)
			return ((long long)i);
		i++;
	}
	return (-1);
}
