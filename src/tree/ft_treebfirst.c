/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_treebfirst.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/28 10:41:58 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/07/04 23:42:12 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

t_tree	*ft_treebfirst(t_tree *root, int (*f)(void *item, void *cmp),
		t_list *queue, void *cmp)
{
	t_tree	*tmp;

	if (!root)
		return (NULL);
	if (!(f(root->item, cmp)))
		return (root);
	if (root->left)
		ft_quepush(&queue, root->left);
	if (root->right)
		ft_quepush(&queue, root->right);
	if (queue)
	{
		tmp = ft_quepop(&queue);
		return (ft_treebfirst(tmp, f, queue, cmp));
	}
	return (NULL);
}
