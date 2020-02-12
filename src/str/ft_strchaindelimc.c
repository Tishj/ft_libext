/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchaindelimc.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 02:17:09 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/12 12:57:14 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

char	*ft_strchaindelimc(char **str, char delim)
{
	char	*new;
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_str2len(str);
	len = (len > 0) ? len - 1 : len;
	new = NULL;
	while (i < len)
	{
		new = ft_stradd(new, str[i]);
		new = ft_straddc(new, delim);
		i++;
	}
	new = ft_stradd(new, str[i]);
	return (new);
}

int		main(void)
{
	char	**new;
	char	input[] = "1234,:.5:,,6.7.8.:,";
	char	*str;

	new = ft_strsplits(input, ".,:");
	ft_str2print(new);
	str = ft_strchain(new);
//	printf("block size: %ld\n", ft_strslenb(input, ".,:"));
	ft_strprint(str);
	ft_str2del(new);
	return (1);
}
