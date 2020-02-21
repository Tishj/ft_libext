/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_plstprefix.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/16 23:01:03 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/21 12:47:41 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

void	ft_plstprefix(t_plist **list, t_plist *add)
{
	t_plist	*tmp;

	if (!list)
		return ;
	tmp = *list;
	*list = add;
	add = ft_plstptr(add);
	add->next = tmp;
}
