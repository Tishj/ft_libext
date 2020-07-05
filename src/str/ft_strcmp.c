/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 20:32:16 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/02/28 12:31:31 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

int		ft_strcmp(void *str1, void *str2)
{
	size_t	i;
	char	*str;
	char	*s2;

	str = str1;
	s2 = str2;
	i = 0;
	while ((str[i] && s2[i]) && str[i] == s2[i])
		i++;
	return (str[i] == 0 && s2[i] == 0) ? 0 : str[i] - s2[i];
}
