/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_fdchar.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/22 22:47:39 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/07/04 23:24:03 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

int	ft_fdchar(int fd, char *c)
{
	static char	buffer[BUFFER_SIZE + 1];
	static char	*iter;
	static int	ret;

	if (!iter || (iter - buffer) >= ret)
	{
		iter = buffer;
		ft_memset(buffer, BUFFER_SIZE, 0);
		ret = read(fd, buffer, BUFFER_SIZE);
	}
	if (ret > 0)
	{
		*c = *iter;
		iter++;
	}
	return (ret);
}
