/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strccmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 20:32:16 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/07/05 12:59:35 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

char	ft_strccmp(char *str, char *s2, char c)
{
	size_t	i;

	i = 0;
	while ((str[i] && s2[i]) && str[i] == s2[i] &&
		((!ft_chrmatchc(str[i], c)) || (!ft_chrmatchc(s2[i], c))))
		i++;
	return ((!str[i] && !s2[i]) ||
			(ft_chrmatchc(str[i], c) || ft_chrmatchc(s2[i], c) ? 0 :
			str[i] - s2[i]));
}
