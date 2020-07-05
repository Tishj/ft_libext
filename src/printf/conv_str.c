/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   conv_str.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/23 17:28:13 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/07/05 15:05:00 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"
#include <stdio.h>
#include "ft_printf.h"
#define ERROR -1

static char	*mod_str(char *str, t_pfconv *conv)
{
	size_t	len;
	char	*new;

	if (!str)
		return (mod_str("(null)", conv));
	len = (conv->precision) ? (int)ft_strnlen(str, conv->maxwidth) :
			(int)ft_strlen(str);
	new = ft_strgenc(' ', (conv->minwidth > (int)len) ?
			conv->minwidth : (int)len);
	ft_memcpy((conv->minwidth > (int)len && conv->padtype == FRONT) ?
			new + (conv->minwidth - len) : new, str, len);
	return (new);
}

int			conv_str(t_pfdata *data, t_pfconv *conv)
{
	int	size;

	conv->string = mod_str(va_arg(data->list, char *), conv);
	if (!conv->string)
		conv->string = "(null)";
	data->str = ft_stradd(data->str, conv->string);
	size = ft_strlen(conv->string);
	free(conv->string);
	if (data->str)
		return (size);
	return (ERROR);
}
