/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 02:26:53 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/12 16:51:44 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

size_t	ft_strncat(char *dst, char *src, size_t len)
{
	dst += ft_strlen(dst);
	return (ft_strncpy(dst, src, len));
}
