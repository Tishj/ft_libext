/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strskipw.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 11:56:59 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/02/12 12:01:30 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

size_t	ft_strskipw(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] && ft_chrmatchw(str[i]))
		i++;
	return (i);
}
