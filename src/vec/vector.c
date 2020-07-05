/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   vector.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/04 11:15:59 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/07/05 21:50:10 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libext.h>
#include <string.h>

int		vec_nullterm(t_vec *vec)
{
	static const char nulls[sizeof(void *)];

	if (!vec_realloc(vec, 1))
		return (0);
	memcpy(vec->data + (vec->size * vec->len), (char *)nulls, vec->size * 1);
	return (1);
}

int		vec_realloc(t_vec *vec, size_t amount)
{
	char	*realloc_data;

	realloc_data = NULL;
	if (vec->len + amount >= vec->capacity)
	{
		while (vec->len + amount >= vec->capacity)
		{
			free(realloc_data);
			vec->capacity *= 2;
			realloc_data = malloc(vec->size * vec->capacity);
			if (!realloc_data)
				return (0);
		}
		memcpy(realloc_data, vec->data, vec->size * vec->len);
		free(vec->data);
		vec->data = realloc_data;
	}
	return (1);
}

/*
**---------=========---------
**        ^         ^
**		index	index+amount
*/

int		vec_insert(t_vec *vec, void *buff, size_t amount, size_t index)
{
	if (!vec_realloc(vec, amount))
		return (0);
	if (index >= vec->len)
		return (vec_add(vec, buff, amount));
	memmove(vec->data + (vec->size * (index + amount)),
		vec->data + (vec->size * index), vec->size * (vec->len - index));
	memcpy(vec->data + (vec->size * index), buff, vec->size * amount);
	vec->len += amount;
	return (1);
}

int		vec_add(t_vec *vec, void *buff, size_t amount)
{
	if (!vec_realloc(vec, amount))
		return (0);
	memcpy(vec->data + (vec->size * vec->len), buff, vec->size * amount);
	vec->len += amount;
	return (1);
}
