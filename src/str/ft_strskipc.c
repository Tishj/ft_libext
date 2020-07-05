/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strskipc.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 11:56:59 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/02/12 11:57:49 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

size_t	ft_strskipc(char *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i] && str[i] == c)
		i++;
	return (i);
}
