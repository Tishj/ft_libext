/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_absnum.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 21:25:53 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/02/21 11:15:54 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

long long	ft_absnum(long long nb)
{
	return ((nb > 0) ? nb : nb * -1);
}
