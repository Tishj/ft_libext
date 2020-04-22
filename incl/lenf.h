/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   lenf.h                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/17 21:35:32 by tbruinem       #+#    #+#                */
/*   Updated: 2020/03/17 23:55:25 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LENF_H
# define LENF_H

#include <unistd.h>
#include <stdarg.h>

# define BASE "-b"
# define LIMITS "nscrw"
# define COUNT "-scrw"

typedef struct	s_modifiers
{
	unsigned char	limit;
	unsigned char	base;
	unsigned char	count;
}				t_modifiers;

typedef struct	s_lenf
{
	t_modifiers	mods;
	int			count;
	size_t		lnum;
	char		*limit;
	char		*include;
	char		*exclude;
}				t_lenf;

size_t	ft_len(t_lenf *data, char *str);
char	ft_countcheck(t_lenf *data, char c);
char	ft_limitcheck(t_lenf *data, char c, size_t len);
size_t	ft_data_count(t_lenf *data, va_list list, char *str);
void	ft_data_init(t_lenf *data);
size_t	ft_data_parse(t_lenf *data, va_list list, char *str);
size_t	ft_data_limit(t_lenf *data, va_list list, char *str);
void	ft_debug(t_lenf *data);

#endif
