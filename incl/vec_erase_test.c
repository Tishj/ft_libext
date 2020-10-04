/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   vec_erase_test.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/04 15:41:53 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/10/04 15:46:09 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <libext.h>

int	main(void)
{
	t_vec	vec;

	vec_new(&vec, sizeof(char));
	for (int i = 0; i < 9; i++)
	{
		char c;

		c = i + '0';
		vec_add(&vec, &c, 1);
	}
	vec_nullterm(&vec);
	printf("%s\n", vec.data);
	vec_erase(&vec, 0, 9);
	printf("%s\n", vec.data);
	return (0);
}
