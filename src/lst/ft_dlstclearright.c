/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_dlstclearright.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/26 23:47:55 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/26 23:51:42 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

void	ft_dlstclearright(t_dlist **head, t_dlist *elem, void (*f)(void *item))
{
	if (!elem)
		return ;
	while (elem->next)
	{
		ft_dlstdel(head, elem, f);
		elem = elem->next;
	}
}
