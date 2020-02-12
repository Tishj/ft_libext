/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str2del.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 02:12:20 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/12 02:13:10 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

void	ft_str2del(char **str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}
