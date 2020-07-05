/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str2fmap.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 01:59:48 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/07/05 22:44:41 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

void	ft_str2fmap(char **str, char *(*f)(char *str, char *arg), char *arg)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		str[i] = f(str[i], arg);
		i++;
	}
}
