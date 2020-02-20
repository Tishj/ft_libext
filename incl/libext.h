/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libext.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/11 23:31:23 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/20 23:50:52 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBEXT_H
# define LIBEXT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

# define BASE "-b"
# define LIMITS "nscrw"
# define COUNT "-scrw"

typedef struct	s_list
{
	void			*item;
	struct s_list	*next;
}				t_list;

typedef struct	s_modifiers
{
	unsigned char	limit;
	unsigned char	base;
	unsigned char	count;
}				t_modifiers;

typedef struct	s_data
{
	t_modifiers	mods;
	int			count;
	size_t		lnum;
	char		*limit;
	char		*include;
	char		*exclude;
}				t_data;

size_t	ft_strlenf(char *str, char *args, ...);
size_t	ft_len(t_data *data, char *str);
char	ft_countcheck(t_data *data, char c);
char	ft_limitcheck(t_data *data, char c, size_t len);
size_t	ft_data_count(t_data *data, va_list list, char *str);
void	ft_data_init(t_data *data);
size_t	ft_data_parse(t_data *data, va_list list, char *str);
size_t	ft_data_limit(t_data *data, va_list list, char *str);


void	ft_chrswapc(char *a, char *b);
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
char	*ft_straddr(char *str, char rstart, char rend);
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

size_t	ft_strnlenrevc(char *str, long n, char c);
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
size_t	ft_strclenr(char *str, char c, char rstart, char rend);
size_t	ft_strclenrevc(char *str, char stop, char c);
size_t	ft_strclenrevr(char *str, char stop, char rstart, char rend);
size_t	ft_strclenrevs(char *str, char stop, char *set);
size_t	ft_strlenr(char *str, char rstart, char rend);
size_t	ft_strnlenr(char *str, size_t n, char rstart, char rend);
size_t	ft_strnlenrevr(char *str, long n, char rstart, char rend);
size_t	ft_strnlenrevs(char *str, long n, char *set);
size_t	ft_strrlenb(char *str, char rstart, char rend);
size_t	ft_strrlenrev(char *str, char rstart, char rend);
size_t	ft_strrlenrevc(char *str, char rstart, char rend, char c);
size_t	ft_strrlenrevs(char *str, char rstart, char rend, char *set);
size_t	ft_strslenr(char *str, char *set, char rstart, char rend);
size_t	ft_strslenrevc(char *str, char *set, char c);
size_t	ft_strslenrevr(char *str, char *set, char rstart, char rend);
size_t	ft_strslenrevs(char *str, char *set, char *set2);
size_t	ft_strwlenb(char *str);
size_t	ft_strwlenc(char *str, char c);
size_t	ft_strwlenr(char *str, char rstart, char rend);
size_t	ft_strwlenrev(char *str);
size_t	ft_strwlenrevc(char *str, char c);
size_t	ft_strwlenrevr(char *str, char rstart, char rend);
size_t	ft_strwlenrevs(char *str, char *set);
size_t	ft_strwlens(char *str, char *set);

size_t	ft_strcpy(char *dst, char *src);
size_t	ft_strncpy(char *dst, char *src, size_t len);
size_t	ft_strscpy(char *dst, char *src, char *set);

size_t	ft_strmatchc(char *str, char c);

size_t	ft_strnskip(char *str, size_t len);
size_t	ft_strskipc(char *str, char c);
size_t	ft_strskips(char *str, char *set);
size_t	ft_strskipw(char *str);
size_t	ft_strnskipc(char *str, size_t len, char c);
size_t	ft_strnskipr(char *str, size_t len, char rstart, char rend);
size_t	ft_strnskips(char *str, size_t len, char *set);
size_t	ft_strnskipw(char *str, size_t len);
size_t	ft_strskipr(char *str, char rstart, char rend);

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

void	ft_strshift(char *str, long long shift);
void	ft_numprint(int nb);
void	ft_numprintbase(int nb, int base, int minlen);
long long ft_absnum(long long nb);
char	**ft_str2dup(char **str);
void	ft_str2prefix(char **str, char *prefix);
void	ft_str2suffix(char **str, char *suffix);
char	*ft_strgenc(char c, size_t len);

void	ft_lstinfix(t_list **list, t_list *add, size_t n);
long long	ft_lstindex(t_list *list, t_list *elem);
void	ft_lstprint(t_list *head, void (*p)(char *item));
size_t	ft_lstlen(t_list *list);
t_list	*ft_lstnew(void *item);
t_list	*ft_lstnptr(t_list *list, size_t n);
void	ft_lstprefix(t_list **list, t_list *add);
t_list	*ft_lstprev(t_list **list, t_list *elem);
t_list	*ft_lstptr(t_list *list);
void	ft_lstrev(t_list **list);
void	ft_lstsuffix(t_list **list, t_list *add);
void	ft_lstswap(t_list **list, t_list *a, t_list *b);

#endif
