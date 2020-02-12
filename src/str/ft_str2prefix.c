/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str2prefix.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 19:23:07 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/12 19:24:30 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

void	ft_str2prefix(char **str, char *prefix)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		str[i] = ft_strprefix(str[i], prefix);
		i++;
	}
}
