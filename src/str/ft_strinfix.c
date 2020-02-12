/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strinfix.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 22:49:36 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/12 23:06:37 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

char	*ft_strinfix(char *dst, char *add, size_t index)
{
	size_t	len;
	size_t	i;
	char	*new;
	char	*orig;

	orig = dst;
	len = ft_strlen(dst) + ft_strlen(add);
	new = ft_calloc(sizeof(char), len + 1);
	i = ft_strncpy(new, dst, index);
	dst += i;
	i += ft_strcat(new + i, add);
	ft_strcat(new + i, dst);
	free(orig);
	return (new);
}
