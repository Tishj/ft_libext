/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_debug.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/21 11:18:15 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/21 11:18:22 by tbruinem      ########   odam.nl         */
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
