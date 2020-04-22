/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstconvstr2.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/30 17:18:14 by tbruinem       #+#    #+#                */
/*   Updated: 2020/03/30 17:21:52 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

char	**ft_lstconvstr2(t_list *root)
{
	size_t	len;
	char	**str2;
	size_t	i;
	t_list	*iter;

	i = 0;
	if (!root)
		return (NULL);
	iter = root;
	len = ft_lstlen(root);
	str2 = malloc(sizeof(char *) * (len + 1));
	if (!str2)
		return (NULL);
	while (iter)
	{
		str2[i] = ft_strdup((char *)root->item);
		i++;
		iter = iter->next;
	}
	str2[i] = 0;
	return (str2);
}
