/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchain.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 02:17:09 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/03/17 21:02:43 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

char	*ft_strchain(char **str)
{
	char	*new;
	size_t	i;

	i = 0;
	new = NULL;
	while (str[i])
	{
		new = ft_stradd(new, str[i]);
		if (!new)
			return (NULL);
		i++;
	}
	return (new);
}
