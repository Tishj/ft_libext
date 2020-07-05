/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstprev.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/17 00:43:29 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/07/04 23:26:17 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

/*
**if elem == ROOT && (*ROOT)->next == elem
**both return (elem);
*/

t_list	*ft_lstprev(t_list **list, t_list *elem)
{
	t_list		*tmp;

	if (!list)
		return (NULL);
	if (elem == *list)
		return (elem);
	tmp = *list;
	while (tmp->next && tmp->next != elem)
		tmp = tmp->next;
	return (tmp->next == elem) ? (tmp) : NULL;
}
