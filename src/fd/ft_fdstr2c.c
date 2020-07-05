/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_fdstr2c.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/22 22:47:39 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/07/04 23:24:28 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

int				ft_fdstr2c(int fd, char ***line, char c)
{
	char	**str;
	int		ret;
	size_t	i;

	i = 0;
	str = ft_calloc(sizeof(char *), 10 + 1);
	if (!str)
		return (0);
	ret = ft_fdstrc(fd, &str[i], c);
	while (ret > -1)
	{
		if (i % 10 == 0)
			ft_str2add(str, 10);
		i++;
		if (ret == 0)
			break ;
		ret = ft_fdstrc(fd, &str[i], c);
	}
	str[i] = 0;
	*line = ft_str2dup(str);
	free(str);
	return (i);
}
