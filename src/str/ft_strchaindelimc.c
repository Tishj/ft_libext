/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchaindelimc.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 02:17:09 by tbruinem       #+#    #+#                */
/*   Updated: 2020/03/17 21:03:06 by tbruinem      ########   odam.nl         */
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
		if (!new)
			return (NULL);
		new = ft_straddc(new, delim);
		if (!new)
			return (NULL);
		i++;
	}
	new = ft_stradd(new, str[i]);
	return (new);
}
