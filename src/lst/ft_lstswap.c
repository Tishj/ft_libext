/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstswap.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/16 23:20:09 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/17 00:52:40 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

void	ft_lstswap(t_list **list, t_list *a, t_list *b)
{
	t_list		**prev1;
	t_list		**prev2;
	t_list		*next;

	prev1 = ft_lstprev(list, a);
	prev2 = ft_lstprev(list, b);
	if (!prev1 || !prev2)
		return ;
	next = a->next;
	a->next = b->next;
	b->next = next;
	*prev1 = b;
	*prev2 = a;
}
