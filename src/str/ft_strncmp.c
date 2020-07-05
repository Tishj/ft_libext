/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 20:32:16 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/02/22 13:42:31 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

char	ft_strncmp(char *str, char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((i < n && (str[i] && s2[i])) && str[i] == s2[i])
		i++;
	return ((str[i] == 0 && s2[i] == 0) || i == n) ? 0 : str[i] - s2[i];
}
