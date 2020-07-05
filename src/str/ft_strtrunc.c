/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrunc.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/18 15:10:22 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/03/18 15:14:01 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

void	ft_strtrunc(char *start, size_t size)
{
	size_t	i;

	i = 0;
	if (ft_strlen(start) < size)
		return ;
	while (start[size + i])
	{
		start[i] = start[size + i];
		i++;
	}
	while (start[i])
	{
		start[i] = '\0';
		i++;
	}
}
