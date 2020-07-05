/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstindex.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/16 23:26:18 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/07/04 23:25:52 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

long long	ft_lstindex(t_list *list, t_list *elem)
{
	size_t	i;

	i = 0;
	while (list && list != elem)
	{
		list = list->next;
		i++;
	}
	if (list == elem)
		return (i);
	return (-1);
}
