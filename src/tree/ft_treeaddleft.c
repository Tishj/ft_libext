/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_treeaddleft.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/28 10:34:33 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/28 10:39:02 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

void	ft_treeaddleft(t_tree *branch, t_tree *add)
{
	if (branch && !branch->left)
		branch->left = add;
}
