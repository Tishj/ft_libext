/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str2convlst.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/30 17:22:13 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/03/30 17:25:16 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

t_list	*ft_str2convlst(char **str2)
{
	t_list	*list;
	size_t	i;

	i = 0;
	if (!str2)
		return (NULL);
	list = NULL;
	while (str2[i])
	{
		ft_lstprefix(&list, ft_lstnew(ft_strdup(str2[i])));
		i++;
	}
	return (list);
}
