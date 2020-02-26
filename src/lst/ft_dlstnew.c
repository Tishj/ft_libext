/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_dlstnew.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/26 23:18:21 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/26 23:21:44 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

HEAP	*ft_dlstnew(void *item, void *prev)
{
	t_dlist	*new;

	new = malloc(sizeof(t_dlist));
	if (!new)
		return (NULL);
	new->prev = prev;
	new->next = NULL;
	new->item = item;
	return (new);
}
