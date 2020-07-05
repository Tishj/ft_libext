/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strscpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 02:23:37 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/02/12 14:56:20 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

size_t	ft_strscpy(char *dst, char *src, char *set)
{
	size_t	i;
	size_t	len;

	if (!src || !dst)
		return (0);
	len = ft_strslen(src, set);
	i = 0;
	while (src[i] && i < len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (i);
}
