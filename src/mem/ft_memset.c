/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/04 23:29:17 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/07/04 23:29:18 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

void	ft_memset(void *mem, size_t len, char c)
{
	size_t	i;
	char	*bytes;

	if (!mem)
		return ;
	bytes = (char *)mem;
	i = 0;
	while (i < len)
	{
		bytes[i] = c;
		i++;
	}
}
