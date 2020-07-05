/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrlenc.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/11 23:32:11 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/02/12 00:10:20 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

size_t	ft_strrlenc(char *str, char rstart, char rend, char c)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (str[i] && !(str[i] >= rstart && str[i] <= rend))
	{
		if (str[i] == c)
			len++;
		i++;
	}
	return (len);
}
