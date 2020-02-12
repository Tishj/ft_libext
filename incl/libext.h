/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libext.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/11 23:31:23 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/12 00:58:35 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBEXT_H
# define LIBEXT_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char	ft_chrmatchc(char c, char match);
char	ft_chrmatchs(char c, const char *set);

size_t	ft_strclen(char *str, char c);
size_t	ft_strclenc(char *str, char c, char match);
size_t	ft_strclens(char *str, char c, char *set);
size_t	ft_strlen(char *str);
size_t	ft_strlens(char *str, char *set);
size_t	ft_strlenc(char *str, char c);
size_t	ft_strnlen(char *str, size_t n);
size_t	ft_strnlenc(char *str, size_t n, char match);
size_t	ft_strnlens(char *str, size_t n, char *set);
size_t	ft_strrlen(char *str, char rstart, char rend);
size_t	ft_strrlenc(char *str, char rstart, char rend, char c);
size_t	ft_strrlens(char *str, char rstart, char rend, char *set);
size_t	ft_strslen(char *str, const char *set);
size_t	ft_strslenc(char *str, char stop, char *set);
size_t	ft_strslens(char *str, char *stop, char *set);

#endif
