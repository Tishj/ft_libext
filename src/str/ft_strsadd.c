/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strsadd.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 02:21:08 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/12 15:18:43 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

char	*ft_strsadd(char *str, char *add, char *set)
{
	char	*new;

	new = ft_calloc(sizeof(char),(ft_strlen(str) + ft_strslen(add, set) + 1));
	ft_strcpy(new, str);
	ft_strscat(new, add, set);
	free(str);
	return (new);
}
