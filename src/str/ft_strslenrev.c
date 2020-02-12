/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strslenrev.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/11 23:32:11 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/12 15:36:18 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

size_t	ft_strslenrev(char *str, char *set)
{
	size_t	i;
	size_t	len;

	i = ft_strlen(str);
	i = (!i) ? 0 : i - 1;
	len = 0;
	while (i > 0 && ft_chrmatchs(str[i], set) == 0)
	{
		i--;
		len++;
	}
	return (len);
}
