/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_dlstaddinfront.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/26 23:39:43 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/26 23:42:24 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

void	ft_dlistaddinfront(t_dlist *elem, t_dlist *add)
{
	if (elem->next)
		elem->next->prev = add;
	add->next = elem->next;
	elem->next = add;
	add->prev = elem;
}
