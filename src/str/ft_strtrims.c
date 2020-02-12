/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrims.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 14:41:37 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/12 15:55:15 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

char	*ft_strtrims(char *str, char *set)
{
	size_t	len;
	char	*new;
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	len = ft_strlen(str) - (ft_strslen(str, set) + ft_strslenrev(str, set));
	new = ft_calloc(sizeof(char),(len + 1));
	i += ft_strslen(str, set);
	i += ft_strskips(str, set);
	ft_strncat(new, str + i, len);
	return (new);
}

int		main(void)
{
	char	str[] = "324ajhddas324hkjsdhfksdf324";
	char	*new;

	new = ft_strtrims(str, "243");
	ft_strprint(new);
	return (1);
}
