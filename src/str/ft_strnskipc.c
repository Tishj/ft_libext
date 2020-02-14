/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnskipc.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 11:56:59 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/13 23:58:51 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

size_t	ft_strnskipc(char *str, size_t len, char c)
{
	size_t	i;

	i = 0;
	while (str[i] && ft_chrmatchc(str[i], c) && i < len)
		i++;
	return (i);
}
