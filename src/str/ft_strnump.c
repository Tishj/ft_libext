/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnump.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 19:42:37 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/12 19:51:05 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

char	ft_strnump(char *str, int *val)
{
	size_t	i;
	int		ret;
	int		check;

	i = 0;
	check = 0;
	ret = 0;
	while (ft_chrmatchr(str[i], '0', '9'))
	{
		ret *= 10 + (str[i] - '0');
		i++;
		check = 1;
		*val = ret;
	}
	return (check);
}
