/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strreplace.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/28 11:20:27 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/07/05 22:20:13 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

/*
**	This function returns a heap allocated string and also frees 'org'
*/

char	*ft_strreplace(char *org, char *before, char *after)
{
	char	*new;
	char	*tmp;
	char	*check;

	check = ft_strstr(org, before);
	if ((!org || !check) || (!before || !after))
		return (NULL);
	new = malloc(sizeof(char) *
		(ft_strlen(org) + ft_strlen(after) - ft_strlen(before)));
	tmp = org + ft_strncpy(new, org, check - org);
	tmp += ft_strlen(before);
	(void)ft_strcat(new, after);
	(void)ft_strcat(new, tmp);
	free(org);
	return (new);
}
