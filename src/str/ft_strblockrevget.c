/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strblockrevget.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/24 11:48:09 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/24 15:01:12 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"
#include <string.h>

char	*ft_strblockrevget(char *str, char *delim, size_t index)
{
	char	*ret;
	size_t	i;
	size_t	blocks;

	i = 1;
	blocks = ft_strslenb(str, delim);
	printf("blocks: %ld\n", blocks);
	ret = ft_strtok(str, delim);
	while (i < (blocks - index))
	{
		ret = ft_strtok(NULL, delim);
		i++;
	}
	return (ret);
}

int		main(void)
{
	char	str[] = "yeet/this/is/a/test/.exe/";
	char	*ret;

	ret = ft_strblockrevget(str, "/", 3);
	printf("str block [blocklen - 1] = %s\n", ret);
	return (1);
}
