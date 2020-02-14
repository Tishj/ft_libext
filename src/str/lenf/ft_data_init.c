/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_data_init.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/14 10:53:20 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/14 11:02:11 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

void	ft_data_init(t_data *data)
{
	data->mods.base = 0;
	data->mods.count = 0;
	data->mods.limit = 0;
	data->exclude = NULL;
	data->include = NULL;
	data->limit = NULL;
	data->lnum = 0;
	data->count = 0;
}
