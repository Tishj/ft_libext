/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   numpadding.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/23 17:28:13 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/07/05 14:53:02 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"
#include <stdio.h>
#include "ft_printf.h"
#define ERROR -1

char	*numpadding(char *num, t_pfconv *conv, int len)
{
	char	*new;
	char	*dst;

	if (conv->minwidth <= len)
		return (num);
	new = ft_strgenc(' ', conv->minwidth);
	if (!new)
		return (NULL);
	dst = new;
	dst += (conv->padtype == FRONT) ? (conv->minwidth - len) : 0;
	ft_memcpy(dst, num, len);
	free(num);
	return (new);
}
