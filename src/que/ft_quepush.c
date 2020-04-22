/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_quepush.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/21 11:39:56 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/28 11:48:48 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

void	ft_quepush(t_list **list, void *item)
{
	t_list	*new;

	if (!list)
		return ;
	new = ft_lstnew(item);
	if (!new)
		return ;
	if (!*list)
		return (ft_lstprefix(list, new));
	ft_lstsuffix(list, new);
}
