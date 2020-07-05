/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_dlstclear.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/26 23:45:18 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/07/04 23:25:21 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

void	ft_dlstclear(t_dlist **head, void (*f)(void *item))
{
	t_dlist	*tmp;

	if (!head)
		return ;
	tmp = *head;
	while (tmp)
	{
		ft_dlstdel(head, tmp, f);
		tmp = tmp->next;
	}
}
