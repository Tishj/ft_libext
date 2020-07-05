/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/23 17:28:13 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/07/05 14:42:37 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"
#include <stdio.h>
#include "ft_printf.h"
#define ERROR -1

static int	program_end(char *str, int ret)
{
	int	i;

	i = 0;
	if (!str)
		ret = ERROR;
	if (ret == ERROR && str)
		free(str);
	if (str)
	{
		ret = ft_strlen(str);
		while (i < ret)
		{
			if (str[i] == -1)
				str[i] = '\0';
			i++;
		}
		write(1, str, ret);
	}
	return (ret);
}

static void	no_conv(t_pfdata *data)
{
	int	skip;

	skip = ft_strclen(data->arg, '%');
	data->str = ft_strnadd(data->str, data->arg, skip);
	data->arg += skip;
	data->ret += skip;
}

int			ft_printf(char *arguments, ...)
{
	t_pfdata	data;

	data = (t_pfdata){0};
	va_start(data.list, arguments);
	data.arg = arguments;
	while (data.arg && *data.arg)
	{
		if (*data.arg == '%')
			data.ret += parseconv(&data);
		else
			no_conv(&data);
		if (data.ret == ERROR)
			break ;
	}
	va_end(data.list);
	return (program_end(data.str, data.ret));
}
