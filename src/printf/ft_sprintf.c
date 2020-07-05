/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sprintf.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/23 17:28:13 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/07/05 15:56:16 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"
#include <stdio.h>
#include "ft_printf.h"
#define ERROR -1

char	*program_end(t_pfdata *data, int *ret)
{
	int	i;

	i = 0;
	if (!data->str)
		data->ret = ERROR;
	if (data->ret == ERROR && data->str)
		free(data->str);
	if (data->str)
	{
		data->ret = ft_strlen(data->str);
		while (i < data->ret)
		{
			if (data->str[i] == -1)
				data->str[i] = '\0';
			i++;
		}
	}
	*ret = data->ret;
	return (data->str);
}

static void	no_conv(t_pfdata *data)
{
	int	skip;

	skip = ft_strclen(data->arg, '%');
	data->str = ft_strnadd(data->str, data->arg, skip);
	data->arg += skip;
	data->ret += skip;
}

char	*ft_sprintf(int *ret, char *arguments, ...)
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
	return (program_end(&data, ret));
}
