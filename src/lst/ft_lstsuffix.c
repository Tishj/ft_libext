/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstsuffix.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/16 22:58:37 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/07/04 23:26:31 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

void	ft_lstsuffix(t_list **list, t_list *add)
{
	t_list	*tmp;

	if (!list)
		return ;
	tmp = *list;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = add;
}
