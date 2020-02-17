/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_countcheck.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/15 12:58:49 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/15 13:41:03 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

char	ft_countcheck(t_data *data, char c)
{
	char	excl;
	char	incl;

	incl = (data->include) ? ft_chrmatchs(c, data->include) : 1;
	excl = (data->exclude) ? (!ft_chrmatchs(c, data->exclude)) : 1;
	return (incl && excl);
}
