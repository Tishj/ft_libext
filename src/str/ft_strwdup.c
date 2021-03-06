/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strwdup.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 01:54:34 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/03/17 21:09:09 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

char	*ft_strwdup(char *str)
{
	size_t	len;
	size_t	i;
	char	*new;

	i = 0;
	len = ft_strwlen(str);
	new = ft_calloc(sizeof(char), (len + 1));
	if (!new)
		return (NULL);
	while (i < len)
	{
		new[i] = str[i];
		if (!new)
			return (NULL);
		i++;
	}
	new[i] = 0;
	return (new);
}
