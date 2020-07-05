/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlens.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/11 23:30:07 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/02/12 00:59:09 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

size_t	ft_strlens(char *str, char *set)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (str[i])
	{
		if (ft_chrmatchs(str[i], set) == 1)
			len++;
		i++;
	}
	return (len);
}
