/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_dlstaddbehind.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/26 23:39:43 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/26 23:44:29 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

void	ft_dlistaddbehind(t_dlist *elem, t_dlist *add)
{
	if (elem->prev)
		elem->prev->next = add;
	add->prev = elem->prev;
	elem->prev = add;
	add->next = elem;
}
