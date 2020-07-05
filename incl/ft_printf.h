/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/22 23:28:56 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/07/05 15:24:20 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# define CONVERSION "lscdiouxXp%"
# define FLAG "-0123456789.*"

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
	char		padtype;
	size_t		index;
	char		padding;
	int			minwidth;
	int			maxwidth;
	int			precision;
	char		*string;
}				t_pfconv;

enum			e_padtype
{
	FRONT,
	BACK,
};

enum			e_conv
{
	STR,
	CHR,
	DIG,
	INT,
	HEXU,
	HEXL,
	PTR,
	UINT,
	OCT,
	PCT,
	L_UINT,
	CONV_SIZE
};

typedef int		(*t_convf)(t_pfdata *data, t_pfconv *conv);

int				ft_printf(char *arguments, ...);
int				parseconv(t_pfdata *data);
char			*numpadding(char *num, t_pfconv *conv, int len);
void			debug(t_pfconv *conv);

int				conv_ulong(t_pfdata *data, t_pfconv *conv);
int				conv_uint(t_pfdata *data, t_pfconv *conv);
int				conv_chr(t_pfdata *data, t_pfconv *conv);
int				conv_str(t_pfdata *data, t_pfconv *conv);
int				conv_di(t_pfdata *data, t_pfconv *conv);

#endif
