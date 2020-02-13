/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strsuffix.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 02:21:08 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/13 11:47:58 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

char	*ft_strsuffix(char *str, char *suffix)
{
	char	*new;

	new = ft_calloc(sizeof(char), (ft_strlen(str) + ft_strlen(suffix) + 1));
	ft_strcpy(new, str);
	ft_strcat(new, suffix);
	free(str);
	return (new);
}
