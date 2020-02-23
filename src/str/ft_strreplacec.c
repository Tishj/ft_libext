/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strreplacec.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/23 16:51:40 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/23 16:52:44 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

void	ft_strreplacec(char *str, char c, char replace)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (ft_chrmatchc(str[i], replace))
			str[i] = c;
		i++;
	}
}
