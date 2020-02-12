/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libext.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/11 23:31:23 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/12 12:47:59 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBEXT_H
# define LIBEXT_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char	ft_chrmatchc(char c, char match);
char	ft_chrmatchs(char c, char *set);
char	ft_chrmatchw(char c);
void	*ft_calloc(size_t len);
void	ft_memset(void *mem, size_t len, char c);
void	ft_str2del(char **str);
size_t	ft_str2len(char **str);
void	ft_str2print(char **str);
char	*ft_stradd(char *str, char *add);
char	*ft_straddc(char *str, char c);
char	*ft_straddn(char *str, size_t n);
size_t	ft_strcat(char *dst, char *src);
size_t	ft_strcatc(char *dst, char c);
char	*ft_strcdup(char *str, char c);
char	*ft_strchain(char **str);
char	*ft_strchaindelimc(char **str, char delim);
size_t	ft_strclen(char *str, char c);
size_t	ft_strclenc(char *str, char c, char match);
size_t	ft_strclenb(char *str, char c);
size_t	ft_strclens(char *str, char c, char *set);
size_t	ft_strcpy(char *dst, char *src);
char	*ft_strdup(char *str, char c);
size_t	ft_strlen(char *str);
size_t	ft_strlenc(char *str, char c);
size_t	ft_strlens(char *str, char *set);
size_t	ft_strlenw(char *str);
size_t	ft_strmatchc(char *str, char c);
char	*ft_strndup(char *str, size_t n);
size_t	ft_strnlen(char *str, size_t n);
size_t	ft_strnlenc(char *str, size_t n, char match);
size_t	ft_strnlens(char *str, size_t n, char *set);
size_t	ft_strnskip(char *str, size_t len);
char	*ft_strprefix(char *str, char *prefix);
void	ft_strprint(char *str);
size_t	ft_strrlen(char *str, char rstart, char rend);
size_t	ft_strrlenc(char *str, char rstart, char rend, char c);
size_t	ft_strrlens(char *str, char rstart, char rend, char *set);
char	*ft_strsdup(char *str, char *set);
size_t	ft_strskipc(char *str, char c);
size_t	ft_strskips(char *str, char *set);
size_t	ft_strskipw(char *str);
size_t	ft_strslen(char *str, char *set);
size_t	ft_strslenc(char *str, char stop, char *set);
size_t	ft_strslens(char *str, char *stop, char *set);
size_t	ft_strslenb(char *str, char *set);
char	**ft_strsplitc(char *str, char c);
char	**ft_strsplits(char *str, char *set);
char	**ft_strsplitw(char *str, char c);
char	*ft_strsuffix(char *str, char *suffix);
char	*ft_strwdup(char *str);
size_t	ft_strwlen(char *str);

#endif
