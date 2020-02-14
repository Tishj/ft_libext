/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnskipw.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 11:56:59 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/13 23:59:53 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

size_t	ft_strnskipw(char *str, size_t len)
{
	size_t	i;

	i = 0;
	while (str[i] && ft_chrmatchw(str[i]) && i < len)
		i++;
	return (i);
}
