/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strslenr.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/11 23:32:11 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/02/13 16:53:36 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

size_t	ft_strslenr(char *str, char *set, char rstart, char rend)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (str[i] && (!ft_chrmatchs(str[i], set)))
	{
		if (ft_chrmatchr(str[i], rstart, rend) == 1)
			len++;
		i++;
	}
	return (len);
}
