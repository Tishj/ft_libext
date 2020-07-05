/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrev.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 15:38:21 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/02/12 15:44:47 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

void	ft_strrev(char *str)
{
	size_t	s;
	size_t	e;
	char	tmp;

	s = 0;
	e = ft_strlen(str);
	e = (!e) ? 0 : e - 1;
	while (e > 0 && s < e)
	{
		tmp = str[s];
		str[s] = str[e];
		str[e] = tmp;
		e--;
		s++;
	}
}
