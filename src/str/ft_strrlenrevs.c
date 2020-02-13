/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrlenrevs.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/11 23:32:11 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/13 18:30:23 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

size_t	ft_strrlenrevs(char *str, char rstart, char rend, char *set)
{
	size_t	i;
	size_t	len;

	i = ft_strlen(str);
	i = (!i) ? 0 : i - 1;
	len = 0;
	while (i > 0 && (!ft_chrmatchr(str[i], rstart, rend)))
	{
		if (ft_chrmatchs(str[i], set))
			len++;
		i--;
	}
	return (len);
}
