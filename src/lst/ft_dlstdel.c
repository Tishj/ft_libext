/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_dlstdel.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/26 23:18:21 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/07/04 23:25:30 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

void	ft_dlstdel(t_dlist **head, t_dlist *del, void (*f)(void *item))
{
	if (!head)
		return ;
	if (*head == del)
	{
		*head = del->next;
		del->next->prev = NULL;
	}
	else if (!del->next)
		del->prev = NULL;
	else
	{
		del->prev->next = del->next;
		del->next->prev = del->prev;
	}
	f(del->item);
	free(del);
}
