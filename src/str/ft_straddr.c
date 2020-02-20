/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_straddr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 02:21:08 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/20 22:07:33 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

char	*ft_straddr(char *str, char rstart, char rend)
{
	char	*new;
	char	i;

	i = rstart;
	new = ft_calloc(sizeof(char), ft_strlen(str) +
		(ft_absnum(rstart - rend) + 2));
	if (!new)
		return (NULL);
	ft_strcpy(new, str);
	while ((rstart < rend) ? i <= rend : i >= rend)
	{
		ft_strcatc(new, i);
		i = (rstart <= rend) ? i + 1 : i - 1;
	}
	free(str);
	return (new);
}
