/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/18 15:20:49 by tbruinem       #+#    #+#                */
/*   Updated: 2020/03/18 15:22:16 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

char	*ft_strchr(char *str, char c)
{
	while (*str && *str != c)
		str++;
	return ((*str == c) ? str : NULL);
}
