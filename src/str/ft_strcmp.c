/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 20:32:16 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/12 20:34:30 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

char	ft_strcmp(char *str, char *s2)
{
	size_t	i;

	i = 0;
	while ((str[i] && s2[i]) && str[i] == s2[i])
		i++;
	return (str[i] == 0 && s2[i] == 0) ? 1 : 0;
}
