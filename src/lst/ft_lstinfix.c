/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstinfix.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/16 23:12:49 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/18 00:10:48 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

void	ft_lstinfix(t_list **list, t_list *add, size_t n)
{
	size_t	len;
	t_list	*next;
	t_list	*prev;

	if (!list)
		return ;
	len = ft_lstlen(*list);
	if (n == 0 || n >= len)
		return ((n == 0) ? ft_lstprefix(list, add) : ft_lstsuffix(list, add));
	prev = ft_lstnptr(*list, n);
	prev = ft_lstprev(list, prev);

	next = prev->next;
	prev->next = add;
	add->next = next;
}
