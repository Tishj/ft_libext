/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_chrmatchc.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/11 23:35:37 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/11 23:41:08 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

char	ft_chrmatchc(char c, char match)
{
	return (c == match) ? 1 : 0;
}
