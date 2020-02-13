/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strslenrevs.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/11 23:32:11 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/13 18:31:46 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

size_t	ft_strslenrevs(char *str, char *set, char *set2)
{
	size_t	i;
	size_t	len;

	i = ft_strlen(str);
	i = (!i) ? 0 : i - 1;
	len = 0;
	while (i > 0 && (!ft_chrmatchs(str[i], set)))
	{
		if (ft_chrmatchs(str[i], set2))
			len++;
		i--;
	}
	return (len);
}
