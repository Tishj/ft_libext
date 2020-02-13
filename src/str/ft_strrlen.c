/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrlen.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/11 23:32:11 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/13 11:48:46 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

size_t	ft_strrlen(char *str, char rstart, char rend)
{
	size_t	i;

	i = 0;
	while (str[i] && !(str[i] >= rstart && str[i] <= rend))
		i++;
	return (i);
}
