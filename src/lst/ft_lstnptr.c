/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnptr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/16 23:03:23 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/07/04 23:26:10 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

t_list	*ft_lstnptr(t_list *list, size_t n)
{
	size_t	i;

	i = 0;
	while (list->next && i < n)
	{
		list = list->next;
		i++;
	}
	return (list);
}
