/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strshift.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/13 12:07:19 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/13 13:56:29 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

void	ft_strshift(char *str, int shift)
{
	char	*tmp;
	size_t	len;

	len = ft_strlen(str);
	shift = (shift > 0) ? shift : len - shift;
	shift = (shift % len);
	printf("%d\n", shift);
	tmp = ft_strdup(str);
	if (!tmp)
		return ;
	ft_strncpy(str, tmp + (len - shift), shift);
	ft_strncpy(str + shift, tmp, len - shift);
	free(tmp);
}
