/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str2suffix.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 19:23:07 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/12 19:26:15 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

void	ft_str2suffix(char **str, char *suffix)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		str[i] = ft_strsuffix(str[i], suffix);
		i++;
	}
}
