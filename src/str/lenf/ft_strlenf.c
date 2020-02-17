/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlenf.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/14 10:18:17 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/15 15:40:33 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

void	ft_debug(t_data *data)
{
	printf("----DATA:----\n");
	printf("--BASE MODIFIERS:--\n");
	if (data->mods.base & 1)
		printf("REVERSE\n");
	if (data->mods.base & 2)
		printf("BLOCKS\n");
	printf("------------\n");
	printf("--LIMIT MODIFIERS:--\n");
	printf("NUM LIMIT: %ld\n", data->lnum);
	printf("LIMIT STRING: %s\n", data->limit);
	printf("------------\n");
	printf("--COUNT MODIFIERS:--\n");
	printf("COUNT INCL STRING: %s\n", data->include);
	printf("COUNT EXCL STRING: %s\n", data->exclude);
}

size_t	ft_strlenf(char *str, char *args, ...)
{
	size_t	i;
	va_list	list;
	t_data	data;

	va_start(list, args);
	ft_data_init(&data);
	i = 0;
	while (args[i])
		i += ft_data_parse(&data, list, &args[i]);
	ft_debug(&data);
	return (ft_len(&data, str));
}
