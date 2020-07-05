/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_nummin.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/23 20:15:40 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/07/04 23:47:43 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

long long	ft_nummax(long long a, long long b)
{
	if (a <= b)
		return (a);
	return (b);
}
