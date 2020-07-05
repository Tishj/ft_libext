/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrims.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 14:41:37 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/02/20 22:06:16 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

char	*ft_strtrims(char *str, char *set)
{
	size_t	len;
	char	*new;
	size_t	i;

	i = 0;
	len = ft_strlen(str) - (ft_strslen(str, set) + ft_strslenrev(str, set));
	new = ft_calloc(sizeof(char), (len + 1));
	if (!new)
		return (NULL);
	i += ft_strslen(str, set);
	i += ft_strskips(str, set);
	ft_strncat(new, str + i, len);
	return (new);
}
