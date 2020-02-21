/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_stkpop.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/21 11:39:56 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/21 11:50:44 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

void	*ft_stkpop(t_list **list, void *item)
{
	void	*item;
	void	*del;

	if (!list || !*list)
		return (NULL);
	item = (*list)->item;
	del = *list;
	list = &(*list)->next;
	free(del);
	return (item);
}
