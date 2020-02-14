/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strshift.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/13 12:07:19 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/14 01:13:37 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

void	ft_strshift(char *str, long long shift)
{
	char	tmp;
	size_t	len;
	size_t	c;
	size_t	index;

	len = ft_strlen(str);
	shift = (shift > 0) ? shift % len : len - ((shift * -1) % len);
	c = 0;
	index = 0;
	while (c < len)
	{
		tmp = str[0];
		str[0] = str[(index + (size_t)shift) % len];
		str[(index + (size_t)shift) % len] = tmp;
		index = ((index + (size_t)shift) % len);
		c++;
	}
}
