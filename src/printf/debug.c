/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   debug.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/23 17:28:13 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/07/05 14:54:50 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"
#include <stdio.h>
#include "ft_printf.h"
#define ERROR -1

void	debug(t_pfconv *conv)
{
	static const char	*convnames[] = {
	[STR] = "STR",
	[CHR] = "CHR",
	[DIG] = "DIG",
	[INT] = "INT",
	[HEXU] = "HEXU",
	[HEXL] = "HEXL",
	[PTR] = "PTR",
	[UINT] = "UINT",
	[L_UINT] = "L_UINT",
	[OCT] = "OCT",
	};

	printf("---CONVERSIONS---:\n");
	printf("MINWIDTH: %d\n", conv->minwidth);
	printf("MAXWIDTH: %d\n", conv->maxwidth);
	if (conv->conversion != -1)
		printf("TYPE: %s\n", convnames[(int)conv->conversion]);
	printf("PRECISION: %d\n", conv->precision);
	printf("PADDING: %c\n", conv->padding);
	printf("PADTYPE: %d\n", (int)conv->padtype);
}
