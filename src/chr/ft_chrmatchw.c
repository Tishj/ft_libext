/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_chrmatchw.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 01:18:40 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/12 01:24:08 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

char	ft_chrmatchw(char c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
		return (1);
	return (0);
}
