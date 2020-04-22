/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   numstr_test.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/17 23:53:31 by tbruinem       #+#    #+#                */
/*   Updated: 2020/03/18 00:56:28 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"
#include "ft_printf.h"

int		main(void)
{
	char	*str;

	str = ft_numstr_base(0, 10);
	ft_strprint(str);
	printf("%d\n", ft_printf("%p\n", str));
	return (0);
}
