/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_chrmatchr.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 19:45:07 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/07/04 23:23:24 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

char	ft_chrmatchr(char c, char rstart, char rend)
{
	if (c >= rstart && c <= rend)
		return (1);
	return (0);
}
