/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_limitcheck.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/15 12:44:48 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/03/17 21:41:50 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"
#include "lenf.h"

char	ft_limitcheck(t_lenf *data, char c, size_t len)
{
	char	set;
	char	num;

	set = (data->limit) ? (!ft_chrmatchs(c, data->limit)) : 1;
	num = (data->lnum) ? len < data->lnum : 1;
	return (set && num);
}
