/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_treeaddright.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/28 10:34:33 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/02/28 10:38:55 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

void	ft_treeaddright(t_tree *branch, t_tree *add)
{
	if (branch && !branch->right)
		branch->right = add;
}
