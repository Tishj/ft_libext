/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strclenc.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/11 23:32:11 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/12 00:01:20 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

size_t	ft_strclenc(char *str, char c, char match)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (str[i] && str[i] != c)
	{
		if (str[i] == match)
			len++;
		i++;
	}
	return (len);
}
