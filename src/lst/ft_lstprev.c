/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstprev.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/17 00:43:29 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/17 01:03:02 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

t_list	**ft_lstprev(t_list **list, t_list *elem)
{
	long long	index;
	t_list		**ret;
	t_list		*tmp;

	index = ft_lstindex(*list, elem, 0);
	if (index < 0)
		return (NULL);
	if (index == 0)
		return (list);
	tmp = ft_lstnptr(*list, index - 1);
	ret = &tmp;
	return (ret);
}
