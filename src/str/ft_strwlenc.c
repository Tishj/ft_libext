/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strwlenc.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/11 23:32:11 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/13 16:47:35 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

size_t	ft_strwlenc(char *str, char c)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (str[i] && (!ft_chrmatchw(str[i])))
	{
		if (ft_chrmatchc(str[i], c))
			len++;
		i++;
	}
	return (len);
}
