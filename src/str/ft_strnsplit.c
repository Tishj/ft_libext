/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnsplit.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 01:48:56 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/02/22 22:36:56 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

char	**ft_strnsplit(char *str, size_t n)
{
	size_t	len;
	size_t	i;
	char	**new;

	i = 0;
	len = ft_strnlenb(str, n);
	new = ft_calloc(sizeof(char *), (len + 1));
	if (!new)
		return (NULL);
	while (i < len)
	{
		new[i] = ft_strndup(str, n);
		str += ft_strnlen(str, n);
		i++;
	}
	new[i] = 0;
	return (new);
}
