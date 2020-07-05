/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   conv_di.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/23 17:28:13 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/07/05 15:04:28 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"
#include <stdio.h>
#include "ft_printf.h"
#define ERROR -1

static char	*mod_di(int num, t_pfconv *conv)
{
	conv->maxwidth = (conv->padding == '0') ? conv->maxwidth : 0;
	conv->maxwidth = (conv->padding == ' ' && num == 0) ? 1 : conv->maxwidth;
	conv->maxwidth += (conv->precision && num < 0) ? 1 : 0;
	conv->string = ft_numstr_base(num, 10, conv->maxwidth);
	if (!conv->string)
		return (NULL);
	conv->string = numpadding(conv->string, conv, ft_strlen(conv->string));
	return (conv->string);
}

int			conv_di(t_pfdata *data, t_pfconv *conv)
{
	conv->string = mod_di((int)va_arg(data->list, int), conv);
	if (!conv->string)
		return (ERROR);
	data->str = ft_stradd(data->str, conv->string);
	free(conv->string);
	if (data->str)
		return (ft_strlen(conv->string));
	return (ERROR);
}
