/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstaddback.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/04 11:13:31 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/10/04 14:18:51 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <libext.h>

void	ft_lstaddback(t_list **list, t_list *new)
{
	t_list	*iter;
	t_list	*last;

	if (!list)
		return ;
	iter = *list;
	if (!*list)
		*list = new;
	last = NULL;
	while (iter)
	{
		last = iter;
		iter = iter->next;
	}
	if (last)
		last->next = new;
}
