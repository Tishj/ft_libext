/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrlenb.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/11 23:32:11 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/02/13 17:41:29 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

size_t	ft_strrlenb(char *str, char rstart, char rend)
{
	size_t	i;
	size_t	len;

	len = 0;
	i = ft_strskipw(str);
	while (str[i] && (!ft_chrmatchr(str[i], rstart, rend)))
	{
		len++;
		i += ft_strwlen(str + i);
		i += ft_strskipw(str + i);
	}
	return (len);
	return (i);
}
