/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_chrswapc.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/14 15:09:20 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/14 15:10:40 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

void	ft_chrswapc(char *a, char *b)
{
	char	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
