/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnlenr.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/11 23:32:11 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/02/13 23:30:46 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

size_t	ft_strnlenr(char *str, size_t n, char rstart, char rend)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (str[i] && i < n)
	{
		if (ft_chrmatchr(str[i], rstart, rend))
			len++;
		i++;
	}
	return (len);
}
