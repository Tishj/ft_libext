/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   vec_erase.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/04 15:28:11 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/10/04 20:27:22 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libext.h>

int		vec_erase(t_vec *vec, size_t index, size_t len)
{
	char	*data;
	if (index > vec->len || index + len > vec->len)
		return (0);
	data = malloc(vec->size * (vec->len - len));
	if (!data)
		return (0);
	ft_memcpy(data, vec->data, index * vec->size);
	ft_memcpy(data + (vec->size * index), vec->data + (vec->size * (index + len)), vec->len - (index + len));
	free(vec->data);
	vec->capacity = (vec->len - len);
	vec->len = (vec->len - len);
	vec->data = data;
	return (1);
}
