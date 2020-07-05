/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strgenc.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 22:29:19 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/02/20 22:07:09 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

char	*ft_strgenc(char c, size_t len)
{
	char	*new;
	size_t	i;

	i = 0;
	new = ft_calloc(sizeof(char), len + 1);
	if (!new)
		return (NULL);
	while (i < len)
	{
		new[i] = c;
		i++;
	}
	new[i] = 0;
	return (new);
}
