/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/17 21:35:32 by tbruinem       #+#    #+#                */
/*   Updated: 2020/03/18 00:37:07 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>

# define CONVERSION "scdiouxXp%"
# define FLAG "0123456789.*"

typedef struct	s_pfdata
{
	char		*arg;
	int			ret;
	char		*str;
	va_list		list;
}				t_pfdata;

typedef struct	s_pfconv
{
	char		conversion;
	size_t		index;
	char		padding;
	int			minwidth;
	int			maxwidth;
	int			precision;
	char		*string;
}				t_pfconv;

enum			e_conversions
{
	EMPTY = 0,
	STR,
	CHR,
	DIG,
	INT,
	HEXU,
	HEXL,
	PTR,
	UINT,
	OCT,
};

typedef int (*t_convf)(t_pfdata *data, t_pfconv *conv);

int		ft_printf(char *arguments, ...);

#endif
