/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnskipr.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 11:56:59 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/02/13 23:59:34 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

size_t	ft_strnskipr(char *str, size_t len, char rstart, char rend)
{
	size_t	i;

	i = 0;
	while (str[i] && ft_chrmatchr(str[i], rstart, rend) && i < len)
		i++;
	return (i);
}
