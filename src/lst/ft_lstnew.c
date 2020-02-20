/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/16 22:54:56 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/20 22:05:32 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

t_list	*ft_lstnew(void *item)
{
	t_list	*new;

	new = ft_calloc(sizeof(t_list), 1);
	if (!new)
		return (NULL);
	new->item = item;
	new->next = NULL;
	return (new);
}
