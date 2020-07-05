/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_dlstswap.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/26 23:52:48 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/07/04 23:25:40 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

void	ft_dlstswap(t_dlist **head, t_dlist *a, t_dlist *b)
{
	t_dlist	*aprev;
	t_dlist	*bprev;
	t_dlist	*anext;
	t_dlist	*bnext;

	if (!head)
		return ;
	aprev = (a->prev) ? a->prev : 0;
	bprev = (b->prev) ? b->prev : 0;
	anext = (a->next) ? a->next : 0;
	bnext = (b->next) ? b->next : 0;
	bprev->next = a;
	bnext->prev = a;
	aprev->next = b;
	anext->prev = b;
	if (*head == a)
		*head = b;
	else if (*head == b)
		*head = a;
}
