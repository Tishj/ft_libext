/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   conv_ulong.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/23 17:28:13 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/07/05 15:13:43 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"
#include <stdio.h>
#include "ft_printf.h"
#define ERROR -1

static char	*mod_ulong(unsigned long num, t_pfconv *conv, char *base)
{
	conv->maxwidth = (conv->padding == '0') ? conv->maxwidth : 0;
	conv->maxwidth = (conv->padding == ' ' && num == 0) ? 1 : conv->maxwidth;
	conv->string = ft_numstrul_base(num, base, conv->maxwidth);
	if (!conv->string)
		return (NULL);
	if (conv->conversion == PTR)
		conv->string = ft_strprefix(conv->string, "0x");
	if (!conv->string)
		return (NULL);
	conv->string = numpadding(conv->string, conv, ft_strlen(conv->string));
	return (conv->string);
}

int			conv_ulong(t_pfdata *data, t_pfconv *conv)
{
	static const char	*base[CONV_SIZE] = {
	[PTR] = "0123456789abcdef",
	[L_UINT] = "0123456789",
	};

	conv->string = mod_ulong(va_arg(data->list, unsigned long),
					conv, (char *)base[(int)conv->conversion]);
	if (!conv->string)
		return (ERROR);
	data->str = ft_stradd(data->str, conv->string);
	if (data->str)
		return (ft_strlen(conv->string));
	return (ERROR);
}
