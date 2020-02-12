/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcat.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 02:26:53 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/12 02:40:44 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

size_t	ft_strcat(char *dst, char *src)
{
	size_t	i;

	i = 0;
	dst += ft_strlen(dst);
	return (ft_strcpy(dst, src));
}
