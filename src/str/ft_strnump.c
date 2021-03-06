/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnump.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 19:42:37 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/04/23 12:24:55 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

/*
**	Atoi, putting the value in VAL,
**	returning a pointer to the remainder of the string
*/

char	*ft_strnump(char *str, int *val)
{
	int		ret;
	int		n;

	ret = 0;
	str += ft_strskipw(str);
	n = (*str == '-') ? -1 : 1;
	str = (*str == '-' || *str == '+') ? str + 1 : str;
	while (ft_chrmatchr(*str, '0', '9'))
	{
		ret = (ret * 10) + (*str - '0');
		str++;
		*val = ret;
	}
	*val = (ret * n);
	return (str);
}
