/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcatc.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 02:26:53 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/12 11:17:07 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

size_t	ft_strcatc(char *dst, char c)
{
	size_t	i;

	i = 0;
	dst += ft_strlen(dst);
	dst[i] = c;
	dst[i + 1] = 0;
	return (1);
}
