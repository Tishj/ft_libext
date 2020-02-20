/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcdups.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 01:54:34 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/20 22:07:25 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

char	*ft_strcdups(char *str, char c, char *set)
{
	size_t	len;
	size_t	i;
	size_t	n;
	char	*new;

	i = 0;
	n = 0;
	len = ft_strclens(str, c, set);
	new = ft_calloc(sizeof(char), (len + 1));
	if (!new)
		return (NULL);
	while (n < len)
	{
		if (ft_chrmatchs(str[i], set))
		{
			new[n] = str[i];
			n++;
		}
		i++;
	}
	new[n] = 0;
	return (new);
}
