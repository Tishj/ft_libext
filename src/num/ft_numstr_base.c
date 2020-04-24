/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_numstr_base.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/17 23:30:20 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/04/23 18:20:06 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

char	*ft_numstr_base(int num, int base, size_t minimum)
{
	char			*str;
	size_t			size;
	unsigned int	nb;

	size = ft_numlen_base(num, base);
	size = (minimum > size || (minimum == 0 && num == 0)) ? minimum : size;
	str = ft_calloc(sizeof(char), size + 1);
	if (!str)
		return (NULL);
	str[size] = '\0';
	nb = (num < 0) ? num * -1 : num;
	while (size > 0)
	{
		str[size - 1] = (nb % base) + '0';
		nb /= base;
		size--;
	}
	if (num < 0)
		str[0] = '-';
	return (str);
}
