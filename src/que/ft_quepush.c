/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_quepush.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/21 11:39:56 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/21 11:54:16 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

void	ft_quepush(t_list **list, void *item)
{
	if (!list || !*list)
		return ;
	ft_lstsuffix(list, item);
}
