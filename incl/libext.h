/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libext.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/11 23:31:23 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/13 18:16:33 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBEXT_H
# define LIBEXT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

char	ft_chrmatchc(char c, char match);
char	ft_chrmatchs(char c, char *set);
char	ft_chrmatchw(char c);
char	ft_chrmatchr(char c, char rstart, char rend);

void	*ft_calloc(size_t size, size_t len);
void	ft_memset(void *mem, size_t len, char c);

void	ft_str2del(char **str);
size_t	ft_str2len(char **str);
void	ft_str2print(char **str);

char	*ft_stradd(char *str, char *add);
char	*ft_straddc(char *str, char c);
char	*ft_straddn(char *str, size_t n);
char	*ft_strnadd(char *str, char *add, size_t n);
char	*ft_strsadd(char *str, char *add, char *set);

size_t	ft_strcat(char *dst, char *src);
size_t	ft_strcatc(char *dst, char c);
size_t	ft_strscat(char *dst, char *src, char *set);
size_t	ft_strncat(char *dst, char *src, size_t len);

char	*ft_strcdup(char *str, char c);
char	*ft_strcdups(char *str, char c, char *set);
char	*ft_strdup(char *str);
char	*ft_strdupc(char *str, char c);
char	*ft_strdups(char *str, char *set);
char	*ft_strndup(char *str, size_t n);
char	*ft_strsdup(char *str, char *set);
char	*ft_strwdup(char *str);

char	*ft_strchain(char **str);
char	*ft_strchaindelimc(char **str, char delim);

size_t	ft_strnlenrevc(char *str, size_t n, char c);
size_t	ft_strclen(char *str, char c);
size_t	ft_strclenb(char *str, char c);
size_t	ft_strclenc(char *str, char c, char match);
size_t	ft_strclenrev(char *str, char c);
size_t	ft_strclens(char *str, char c, char *set);
size_t	ft_strlen(char *str);
size_t	ft_strlenc(char *str, char c);
size_t	ft_strlens(char *str, char *set);
size_t	ft_strlenw(char *str);
size_t	ft_strnlen(char *str, size_t n);
size_t	ft_strnlenc(char *str, size_t n, char match);
size_t	ft_strnlens(char *str, size_t n, char *set);
size_t	ft_strrlen(char *str, char rstart, char rend);
size_t	ft_strrlenc(char *str, char rstart, char rend, char c);
size_t	ft_strrlens(char *str, char rstart, char rend, char *set);
size_t	ft_strslen(char *str, char *set);
size_t	ft_strnlenb(char *str, size_t n);
size_t	ft_strslenb(char *str, char *set);
size_t	ft_strslenc(char *str, char *set, char c);
size_t	ft_strslenrev(char *str, char *set);
size_t	ft_strslens(char *str, char *stop, char *set);
size_t	ft_strwlen(char *str);

size_t	ft_strcpy(char *dst, char *src);
size_t	ft_strncpy(char *dst, char *src, size_t len);
size_t	ft_strscpy(char *dst, char *src, char *set);

size_t	ft_strmatchc(char *str, char c);

size_t	ft_strnskip(char *str, size_t len);
size_t	ft_strskipc(char *str, char c);
size_t	ft_strskips(char *str, char *set);
size_t	ft_strskipw(char *str);

void	ft_strprint(char *str);
void	ft_strnprint(char *str, size_t n);
void	ft_strwprint(char *str);

char	*ft_strstr(char *str, char *ndl);
char	*ft_strnstr(char *str, char *ndl, size_t n);

char	ft_strnump(char *str, int *val);

char	ft_strcmp(char *str, char *s2);
char	ft_strncmp(char *str, char *s2, size_t n);

void	ft_strrev(char *str);

char	**ft_strsplitc(char *str, char c);
char	**ft_strsplits(char *str, char *set);
char	**ft_strsplitw(char *str, char c);

char	*ft_strinfix(char *dst, char *add, size_t index);
char	*ft_strprefix(char *str, char *prefix);
char	*ft_strsuffix(char *str, char *suffix);

char	*ft_strtrims(char *str, char *set);
char	*ft_strtrimsf(char *str, char *set);

int		ft_chrcprint(char c, char nope);
int		ft_chrcprintfd(char c, char nope, int fd);
int		ft_chrprint(char c);
int		ft_chrprintc(char c, char yes);
int		ft_chrprintfd(char c, int fd);
int		ft_chrprintfdc(char c, char yes, int fd);
int		ft_chrprintfds(char c, int fd, char *set);
int		ft_chrprints(char c, char *set);
int		ft_chrsprint(char c, char *set);

void	ft_strshift(char *str, int shift);
void	ft_numprint(int nb);
char	**ft_str2dup(char **str);
void	ft_str2prefix(char **str, char *prefix);
void	ft_str2suffix(char **str, char *suffix);
char	*ft_strgenc(char c, size_t len);

#endif
