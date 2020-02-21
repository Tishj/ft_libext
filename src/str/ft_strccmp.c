/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strccmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 20:32:16 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/13 19:32:13 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

char	ft_strccmp(char *str, char *s2, char c)
{
	size_t	i;

	i = 0;
	while ((!ft_chrmatchc(str[i], c) && (str[i] && s2[i])) && str[i] == s2[i])
		i++;
	return ((str[i] == 0 && s2[i] == 0) || i == n) ? 1 : 0;
}
