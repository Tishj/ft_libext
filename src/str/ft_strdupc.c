/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdupc.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 01:54:34 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/03/30 12:23:03 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

char	*ft_strdupc(char *str, char c)
{
	size_t	len;
	size_t	i;
	size_t	n;
	char	*new;

	i = 0;
	n = 0;
	if (!str)
		return (NULL);
	len = ft_strlenc(str, c);
	new = ft_calloc(sizeof(char), (len + 1));
	if (!new)
		return (NULL);
	while (n < len)
	{
		if (str[i] == c)
		{
			new[n] = str[i];
			if (!new)
				return (NULL);
			n++;
		}
		i++;
	}
	new[n] = 0;
	return (new);
}
