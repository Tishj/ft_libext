/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_dlstaddfront.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/26 23:34:22 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/26 23:36:25 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

void	ft_dlstaddfront(t_dlist **head, t_dlist *add)
{
	if (!head)
		return ;
	add->next = *head;
	(*head)->prev = add;
	*head = add;
	add->prev = NULL;
}
