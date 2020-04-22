/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strblockrevget.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/24 11:48:09 by tbruinem       #+#    #+#                */
/*   Updated: 2020/03/17 21:42:10 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

char	*ft_strblockrevget(char *str, char *delim, size_t index)
{
	char	*ret;
	size_t	i;
	size_t	blocks;

	i = 1;
	blocks = ft_strslenb(str, delim);
	ret = ft_strtok(str, delim);
	while (i < (blocks - index))
	{
		ret = ft_strtok(NULL, delim);
		i++;
	}
	return (ret);
}
