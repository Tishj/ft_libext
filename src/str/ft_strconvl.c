/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strconvl.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/23 16:48:25 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/23 16:50:52 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

void	ft_strconvl(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (ft_chrmatchr(str[i], 'A', 'Z'))
			str[i] = (str[i] - 'A') + 'z';
		i++;
	}
}
