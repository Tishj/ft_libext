/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_plstptr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/16 23:03:23 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/02/21 12:48:00 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

t_plist	*ft_plstptr(t_plist *list)
{
	while (list->next)
		list = list->next;
	return (list);
}
