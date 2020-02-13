/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnlenrevr.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/11 23:32:11 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/13 18:23:29 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

size_t	ft_strnlenrevr(char *str, size_t n, char rstart, char rend)
{
	size_t	i;
	size_t	len;

	i = ft_strlen(str);
	i = (!i) ? 0 : i - 1;
	n = i - n;
	if (n < 0)
		return (0);
	len = 0;
	while (i > 0 && i > n)
	{
		if (ft_chrmatchr(str[i], rstart, rend))
			len++;
		i--;
	}
	return (len);
}
