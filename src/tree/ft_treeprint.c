/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_treeprint.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/28 11:59:11 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/28 12:22:59 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

void	ft_treeprint(t_tree *root, void (*print)(void *item))
{
	if (!root)
		return ;
	print(root->item);
	if (root->left)
	{
		printf("left child:\n");
		ft_treeprint(root->left, print);
	}
	if (root->right)
	{
		printf("right child:\n");
		ft_treeprint(root->right, print);
	}
}
