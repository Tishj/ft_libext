/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdups.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 01:54:34 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/07/05 22:19:45 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

char	*ft_strdups(char *str, char *set)
{
	size_t	len;
	size_t	i;
	size_t	n;
	char	*new;

	i = 0;
	n = 0;
	if (!str)
		return (NULL);
	len = ft_strlens(str, set);
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
