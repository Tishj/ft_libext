/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 02:26:53 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/12 14:50:31 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

size_t	ft_strncat(char *dst, char *src, size_t len)
{
	size_t	i;

	i = 0;
	dst += ft_strlen(dst);
	return (ft_strncpy(dst, src, len));
}
