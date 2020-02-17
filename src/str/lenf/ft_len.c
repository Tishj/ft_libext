/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_len.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/15 12:30:22 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/15 15:40:37 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

size_t	ft_len(t_data *data, char *str)
{
	size_t	len;
	size_t	i;
	char	rev;

	rev = (data->mods.base >> 0 & 1);
	if (!str)
		return (0);
	i = (rev) ? ft_strlen(str) : 0;
	len = 0;
	while ((rev) ? i > 0 && ft_limitcheck(data, str[i - 1], len) :
			str[i] && ft_limitcheck(data, str[i], len))
	{
		if ((rev) ? (str[i - 1] && ft_countcheck(data, str[i - 1])) :
			(str[i] && ft_countcheck(data, str[i])))
		{
			len++;
			if (rev)
				printf("str[%ld] = %c\n", i - 1, str[i - 1]);
			else
				printf("str[%ld] = %c\n", i, str[i]);
		}
		i = (rev) ? i - 1 : i + 1;
	}
	return (len);
}
