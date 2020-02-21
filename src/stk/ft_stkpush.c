/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_stkpush.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/21 11:39:56 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/21 11:53:27 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

void	ft_stkpush(t_list **list, void *item)
{
	if (!list || !*list)
		return ;
	ft_lstprefix(list, item);
}
