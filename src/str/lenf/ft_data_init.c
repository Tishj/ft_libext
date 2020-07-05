/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_data_init.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/14 10:53:20 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/03/17 21:41:38 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"
#include "lenf.h"

void	ft_data_init(t_lenf *data)
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
