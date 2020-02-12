/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_stradd.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 02:21:08 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/12 15:18:14 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

char	*ft_stradd(char *str, char *add)
{
	char	*new;

	new = ft_calloc(sizeof(char),(ft_strlen(str) + ft_strlen(add) + 1));
	ft_strcpy(new, str);
	ft_strcat(new, add);
	free(str);
	return (new);
}
