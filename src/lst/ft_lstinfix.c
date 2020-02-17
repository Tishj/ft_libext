/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstinfix.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/16 23:12:49 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/17 01:14:59 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

void	ft_lstinfix(t_list **list, t_list *add, size_t n)
{
	t_list	**tmp;
	t_list	*next;

	if (!list)
		return ;
	tmp = ft_lstprev(list, ft_lstnptr(*list, n));
	if (tmp == list)
	{
		add = (*tmp)->next;
		(*tmp)->next = add;
		return ;
	}
	next = (*tmp)->next;
	(*tmp)->next = add;
	add->next = next;
}
