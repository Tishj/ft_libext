/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstswap.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/16 23:20:09 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/20 23:55:46 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

void	ft_lstswap(t_list **list, t_list *a, t_list *b)
{
	char		a_first;
	long long	a_idx;
	long long	b_idx;
	t_list		*prev1;
	t_list		*prev2;

	a_idx = ft_lstindex(*list, a);
	b_idx = ft_lstindex(*list, b);
	if (a_idx == -1 || b_idx == -1)
		return ;
	a_first = b_idx > a_idx;
	prev1 = (a_first) ? ft_lstprev(list, a) : ft_lstprev(list, b);
	prev2 = (a_first) ? ft_lstprev(&prev1, b) : ft_lstprev(&prev1, a);
	if (prev1 == *list)
		*list = (a_first) ? b : a;
	else
		prev1->next = (a_first) ? b : a;
	prev2->next = (a_first) ? a : b;
	prev1 = a->next;
	a->next = b->next;
	b->next = prev1;
}
