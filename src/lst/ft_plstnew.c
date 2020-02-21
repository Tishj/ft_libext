/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_plstnew.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/21 12:12:56 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/21 12:14:17 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

void	*ft_plstnew(void *item, int priority)
{
	t_plist	*new;

	new = ft_calloc(sizeof(t_plist), 1);
	if (!new)
		return (NULL);
	new->next = NULL;
	new->priority = priority;
	new->item = item;
	return (new);
}
