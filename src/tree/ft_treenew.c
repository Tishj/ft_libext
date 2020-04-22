/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_treenew.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/28 10:33:08 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/28 10:34:23 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

t_tree	*ft_treenew(void *item)
{
	t_tree	*new;

	new = malloc(sizeof(t_tree));
	if (!new)
		return (NULL);
	new->item = item;
	new->left = NULL;
	new->right = NULL;
	return (new);
}
