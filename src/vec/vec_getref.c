/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   vec_getref.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/04 22:52:06 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/07/04 23:00:05 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libext.h>

void	*vec_getref(t_vec *vec, size_t index)
{
	if (index > vec->len)
		return (NULL);
	return (vec->data + (vec->size * index));
}
