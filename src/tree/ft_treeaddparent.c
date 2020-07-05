/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_treeaddparent.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/28 10:28:08 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/02/28 11:58:10 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

void	ft_treeaddparent(t_tree **root, t_tree *add)
{
	if (!root || !add)
		return ;
	if (!add->left)
		add->left = *root;
	else if (!add->right)
		add->right = *root;
	else
		return ;
	*root = add;
}
