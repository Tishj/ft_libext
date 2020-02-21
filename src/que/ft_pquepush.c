/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_pquepush.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/21 11:39:56 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/21 12:53:18 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

static void		ft_plst_place(t_plist **list, t_plist *new)
{
	t_plist	*tmp;
	t_plist	*next;

	tmp = *list;
	if (tmp->priority < new->priority)
		return (ft_plstprefix(list, new));
	while (tmp->next && tmp->next->priority >= new->priority)
		tmp = tmp->next;
	if (tmp->next == NULL)
		return ;
	next = tmp->next;
	tmp->next = new;
	new->next = next;
}

void			ft_pquepush(t_plist **list, void *item, int priority)
{
	t_plist	*new;

	new = ft_plstnew(item, priority);
	if (!new || !list || !*list)
		return ;
	ft_plst_place(list, new);
}
