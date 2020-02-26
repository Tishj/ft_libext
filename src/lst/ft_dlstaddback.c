/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_dlstaddback.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/26 23:37:03 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/26 23:38:24 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

void	ft_dlstaddback(t_dlist **head, t_dlist *add)
{
	t_dlist	*tmp;

	if (!head)
		return ;
	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = add;
	add->prev = tmp;
}
