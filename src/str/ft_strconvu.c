/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strconvu.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/23 16:48:25 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/23 16:50:36 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

void	ft_strconvu(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (ft_chrmatchr(str[i], 'a', 'z'))
			str[i] = (str[i] - 'a') + 'A';
		i++;
	}
}
