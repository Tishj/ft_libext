/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_numstru_base.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/17 23:30:20 by tbruinem       #+#    #+#                */
/*   Updated: 2020/03/18 00:20:45 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

char	*ft_numstru_base(unsigned int num, char *base)
{
	char			*str;
	size_t			size;
	size_t			numbase;

	numbase = ft_strlen(base);
	if (numbase < 2)
		return (NULL);
	size = ft_numlenu_base(num, numbase);
	str = ft_calloc(sizeof(char), size + 1);
	if (!str)
		return (NULL);
	str[size] = '\0';
	while (size > 0)
	{
		str[size - 1] = base[num % numbase];
		num /= numbase;
		size--;
	}
	return (str);
}
