/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_dlstclearleft.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/26 23:47:55 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/07/04 23:25:23 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

void	ft_dlstclearleft(t_dlist **head, t_dlist *elem, void (*f)(void *item))
{
	if (!elem)
		return ;
	while (elem->prev)
	{
		ft_dlstdel(head, elem, f);
		elem = elem->prev;
	}
}
