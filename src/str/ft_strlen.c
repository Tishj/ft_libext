/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/11 23:30:07 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/07/05 19:34:24 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
	{
//		printf("str[%lu]: %c\n", i, str[i]);
		i++;
	}
	return (i);
}
