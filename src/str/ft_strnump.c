/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnump.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 19:42:37 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/23 17:04:24 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

char	ft_strnump(char *str, int *val)
{
	size_t	i;
	int		ret;
	int		check;
	int		n;

	check = 0;
	ret = 0;
	i = ft_strskipw(str);
	n = (str[i] == '-') ? -1 : 1;
	i = (str[i] == '-' || str[i] == '+') ? i + 1 : i;
	while (ft_chrmatchr(str[i], '0', '9'))
	{
		ret *= 10 + (str[i] - '0');
		i++;
		check = 1;
		*val = ret;
	}
	if (check)
		*val = (ret * n);
	return (check);
}
