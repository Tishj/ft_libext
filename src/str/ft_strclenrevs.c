/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strclenrevs.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/11 23:32:11 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/13 18:28:11 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

size_t	ft_strclenrevs(char *str, char stop, char *set)
{
	size_t	i;
	size_t	len;

	i = ft_strlen(str);
	i = (!i) ? 0 : i - 1;
	len = 0;
	while (i > 0 && (!ft_chrmatchc(str[i], stop)))
	{
		if (ft_chrmatchs(str[i], set))
			len++;
		i--;
	}
	return (len);
}
