/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrlenrevc.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/11 23:32:11 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/13 18:30:05 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

size_t	ft_strrlenrevc(char *str, char rstart, char rend, char c)
{
	size_t	i;
	size_t	len;

	i = ft_strlen(str);
	i = (!i) ? 0 : i - 1;
	len = 0;
	while (i > 0 && (!ft_chrmatchr(str[i], rstart, rend)))
	{
		if (ft_chrmatchc(str[i], c))
			len++;
		i--;
	}
	return (len);
}
