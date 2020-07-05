/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstdel.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/21 12:04:27 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/07/04 23:25:49 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

void	ft_lstdel(t_list **list, t_list *elem, void (*del)(void *item))
{
	t_list	*prev;

	if (!list || !*list)
		return ;
	prev = ft_lstprev(list, elem);
	del(elem->item);
	if (elem == *list)
		*list = elem->next;
	else
		prev->next = elem->next;
	free(elem);
}
