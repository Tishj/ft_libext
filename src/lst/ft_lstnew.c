/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/16 22:54:56 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/17 00:57:17 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

t_list	*ft_lstnew(void *item)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	new->item = item;
	new->next = NULL;
	return (new);
}
