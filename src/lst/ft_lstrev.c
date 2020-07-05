/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstrev.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/16 23:06:42 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/07/04 23:26:28 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

void	ft_lstrev(t_list **list)
{
	size_t	len;
	size_t	i;
	t_list	*tmp;

	i = 0;
	if (!list)
		return ;
	len = ft_lstlen(*list);
	while (i < len)
	{
		tmp = ft_lstptr(*list);
		ft_lstprefix(list, tmp);
		i++;
	}
}
