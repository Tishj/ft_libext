/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_fdstrc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/22 22:47:39 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/24 16:00:13 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

static HEAP		*ft_strncdup(char *str, size_t n, char c)
{
	int		climit;
	char	*new;
	size_t	i;

	i = 0;
	climit = ft_chrmatchs(c, str);
	n = (climit) ? ft_strclen(str, c) : n;
	new = ft_calloc(sizeof(char), n + 1);
	if (!new)
		return (NULL);
	while (i < n)
	{
		new[i] = str[i];
		i++;
	}
	new[i] = 0;
	return (new);
}

int				ft_fdstrc(int fd, char **line, char c)
{
	char	*str;
	int		ret;
	size_t	i;

	i = 0;
	if (!line || read(fd, (void *)0, 0) == -1)
		return (-1);
 	str = ft_calloc(sizeof(char), 1);
	if (!str)
		return (-1);
	ret = ft_fdchar(fd, &str[i]);
	while (ret > 0 && str[i] != c)
	{
		if (i % BUFFER_SIZE == 0)
		{
			str = ft_straddn(str, BUFFER_SIZE);
			if (!str)
				return (-1);
		}
		i++;
		ret = ft_fdchar(fd, &str[i]);
	}
	*line = (ret > -1) ? ft_strncdup(str, i, c) : NULL;
	free(str);
	return ((ret > 0) ? 1 : ret);
}
