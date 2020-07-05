/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_treeaddchild.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/28 10:37:07 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/02/28 10:38:04 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

void	ft_treeaddchild(t_tree *branch, t_tree *add)
{
	if (!branch)
		return ;
	if (!branch->left)
		branch->left = add;
	else if (!branch->right)
		branch->right = add;
}
