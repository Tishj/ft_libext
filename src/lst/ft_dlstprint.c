/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_dlstprint.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/27 00:00:44 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/27 00:02:08 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

void	ft_dlstprint(t_dlist **head)
{
	t_dlist	*tmp;

	if (!head)
		return ;
	tmp = *head;
	while (tmp)
	{
		ft_strprint(tmp->item);
		tmp = tmp->next;
	}
}
