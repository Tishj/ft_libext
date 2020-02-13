/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_straddn.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 02:21:08 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/13 11:46:35 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

char	*ft_straddn(char *str, size_t n)
{
	char	*new;

	new = ft_calloc(sizeof(char), (ft_strlen(str) + n + 1));
	ft_strcpy(new, str);
	free(str);
	return (new);
}
