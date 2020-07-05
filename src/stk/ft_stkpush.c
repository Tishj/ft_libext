/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_stkpush.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/21 11:39:56 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/02/28 11:49:56 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

void	ft_stkpush(t_list **list, void *item)
{
	t_list	*new;

	if (!list)
		return ;
	new = ft_lstnew(item);
	if (!new)
		return ;
	ft_lstprefix(list, item);
}
