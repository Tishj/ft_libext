/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strsplitc.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 01:48:56 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/12 02:35:27 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

char	**ft_strsplitc(char *str, char c)
{
	size_t	len;
	size_t	i;
	size_t	n;
	char	**new;

	i = 0;
	n = 0;
	len = ft_strlenc(str, c) + 1;
	new = malloc(sizeof(char *) * (len + 1));
	while (n < len)
	{
		new[n] = ft_strdupc(str + i, c);
		i += ft_strclen(str + i, c) + 1;
		n++;
	}
	new[n] = 0;
	return (new);
}

int		main(void)
{
	char	**new;
	char	*str;

	new = ft_strsplitc("1234,5,6,7,8", ',');
	ft_str2print(new);
	str = ft_strchain(new);
	ft_strprint(str);
	ft_str2del(new);
	return (1);
}
