/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstprefix.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/16 23:01:03 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/17 00:58:51 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

void	ft_lstprefix(t_list **list, t_list *add)
{
	t_list	*tmp;

	if (!list)
		return ;
	tmp = *list;
	*list = add;
	add = ft_lstptr(add);
	add->next = tmp;
}
