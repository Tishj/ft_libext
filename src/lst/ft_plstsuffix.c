/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_plstsuffix.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/16 22:58:37 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/21 12:48:55 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

void	ft_plstsuffix(t_plist **list, t_plist *add)
{
	t_plist	*tmp;

	if (!list)
		return ;
	tmp = *list;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = add;
}
