/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/21 11:32:22 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/07/04 23:25:43 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

char	ft_lstcmp(void *a, void *b, char (*cmp)(void *item1, void *item2))
{
	char	res;

	if (!a || !b)
		return (0);
	res = cmp(a, b);
	if (res >= 0)
		return (1);
	return (-1);
}
