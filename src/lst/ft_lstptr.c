/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstptr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/16 23:03:23 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/16 23:11:33 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

t_list	*ft_lstptr(t_list *list)
{
	while (list->next)
		list = list->next;
	return (list);
}
