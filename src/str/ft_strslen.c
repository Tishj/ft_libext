/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strslen.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/11 23:32:11 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/02/12 01:22:20 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

size_t	ft_strslen(char *str, char *set)
{
	size_t	i;

	i = 0;
	while (str[i] && ft_chrmatchs(str[i], set) == 0)
		i++;
	return (i);
}
