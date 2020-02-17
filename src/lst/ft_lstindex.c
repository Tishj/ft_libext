/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstindex.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/16 23:26:18 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/16 23:41:45 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

long long	ft_lstindex(t_list *list, t_list *elem, size_t i)
{
	if (list == elem)
		return (i);
	else if (list == NULL)
		return (-1);
	else
		return (ft_lstindex(list->next, elem, i + 1));
}
