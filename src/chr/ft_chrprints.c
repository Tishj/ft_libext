/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_chrprints.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 22:20:51 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/07/04 23:23:48 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

int		ft_chrprints(char c, char *set)
{
	if (ft_chrmatchs(c, set))
		return (write(1, &c, 1));
	return (0);
}
