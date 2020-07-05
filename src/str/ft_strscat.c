/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strscat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 02:26:53 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/02/12 16:51:58 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

size_t	ft_strscat(char *dst, char *src, char *set)
{
	dst += ft_strlen(dst);
	return (ft_strscpy(dst, src, set));
}
