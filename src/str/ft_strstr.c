/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 20:25:07 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/03/28 11:51:14 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

char	*ft_strstr(char *str, char *ndl)
{
	size_t	i;
	size_t	len;
	size_t	ndl_len;

	ndl_len = ft_strlen(ndl);
	if (!ndl || !str)
		return (NULL);
	len = ft_strlen(str);
	i = 0;
	while (i < (len - ndl_len) && str[i])
	{
		if (str[i] != ndl[0])
			i += ft_strclen(str + i, ndl[0]);
		if (!ft_strncmp(str + i, ndl, ft_strlen(ndl)))
			return (str + i);
		i++;
	}
	return (NULL);
}
