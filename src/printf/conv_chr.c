/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   conv_chr.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/23 17:28:13 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/07/05 15:07:58 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"
#include <stdio.h>
#include "ft_printf.h"
#define ERROR -1

int		conv_chr(t_pfdata *data, t_pfconv *conv)
{
	char	c;

	conv->string = ft_strgenc(' ', (conv->minwidth) ?
											conv->minwidth : 1);
	if (!conv->string)
		return (ERROR);
	c = (conv->conversion == PCT) ? '%' : (char)va_arg(data->list, int);
	c = (c == '\0') ? -1 : c;
	conv->string[(conv->minwidth && conv->padtype == FRONT) ?
				conv->minwidth - 1 : 0] = c;
	data->str = ft_stradd(data->str, conv->string);
	free(conv->string);
	if (data->str)
		return ((conv->minwidth) ? conv->minwidth : 1);
	return (ERROR);
}
