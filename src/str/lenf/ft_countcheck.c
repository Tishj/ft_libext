/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_countcheck.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/15 12:58:49 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/03/17 21:41:35 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"
#include "lenf.h"

char	ft_countcheck(t_lenf *data, char c)
{
	char	excl;
	char	incl;

	incl = (data->include) ? ft_chrmatchs(c, data->include) : 1;
	excl = (data->exclude) ? (!ft_chrmatchs(c, data->exclude)) : 1;
	return (incl && excl);
}
