/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstlookup.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/30 20:11:50 by tbruinem       #+#    #+#                */
/*   Updated: 2020/03/30 20:17:39 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

t_list	*ft_lstlookup(t_list *root, char *str)
{
	while (root)
	{
		if (ft_strcmp((char *)root->item, str) == 0)
			return (root);
		root = root->next;
	}
	return (root);
}
