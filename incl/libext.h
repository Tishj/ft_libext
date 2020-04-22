/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libext.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/11 23:31:23 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/04/23 00:39:55 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBEXT_H
# define LIBEXT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 128
# endif

#define HEAP void

typedef struct	s_tree
{
	struct s_tree	*left;
	struct s_tree	*right;
	void			*item;
}				t_tree;

typedef struct	s_list
{
	void			*item;
	struct s_list	*next;
}				t_list;

typedef struct	s_dlist
{
	void			*item;
	struct s_dlist	*next;
	struct s_dlist	*prev;
}				t_dlist;

typedef struct	s_plist
{
	void			*item;
	struct s_plist	*next;
	int				priority;
}				t_plist;



size_t		ft_strlenf(char *str, char *args, ...);

int			ft_fdchar(int fd, char *c);
int			ft_fdstrc(int fd, char **line, char c);

void		ft_chrswapc(char *a, char *b);
char		ft_chrmatchc(char c, char match);
char		ft_chrmatchs(char c, char *set);
char			ft_chrmatchw(char c);
char		ft_chrmatchr(char c, char rstart, char rend);

void		*ft_calloc(size_t size, size_t len);
void		ft_memset(void *mem, size_t len, char c);

void		ft_str2del(char **str);
size_t		ft_str2len(char **str);
void		ft_str2print(char **str);

char		*ft_strsep(char *str, char *delimiter);
char		*ft_strtok(char *str, char *delimiter);

char		*ft_stradd(char *str, char *add);
char		*ft_straddc(char *str, char c);
char		*ft_straddn(char *str, size_t n);
char		*ft_straddr(char *str, char rstart, char rend);
char		*ft_strnadd(char *str, char *add, size_t n);
char		*ft_strsadd(char *str, char *add, char *set);

size_t		ft_strcat(char *dst, char *src);
size_t		ft_strcatc(char *dst, char c);
size_t		ft_strscat(char *dst, char *src, char *set);
size_t		ft_strncat(char *dst, char *src, size_t len);

char		*ft_strcdup(char *str, char c);
char		*ft_strcdups(char *str, char c, char *set);
char		*ft_strdup(char *str);
char		*ft_strdupc(char *str, char c);
char		*ft_strdups(char *str, char *set);
char			*ft_strndup(char *str, size_t n);
char		*ft_strsdup(char *str, char *set);
char		*ft_strwdup(char *str);

char		*ft_strchain(char **str);
char		*ft_strchaindelimc(char **str, char delim);

size_t		ft_strnlenrevc(char *str, long n, char c);
size_t		ft_strclen(char *str, char c);
size_t		ft_strclenb(char *str, char c);
size_t		ft_strclenc(char *str, char c, char match);
size_t		ft_strclenrev(char *str, char c);
size_t		ft_strclens(char *str, char c, char *set);
size_t		ft_strlen(char *str);
size_t		ft_strlenc(char *str, char c);
size_t		ft_strlens(char *str, char *set);
size_t		ft_strlenw(char *str);
size_t		ft_strnlen(char *str, size_t n);
size_t		ft_strnlenc(char *str, size_t n, char match);
size_t		ft_strnlens(char *str, size_t n, char *set);
size_t		ft_strrlen(char *str, char rstart, char rend);
size_t		ft_strrlenc(char *str, char rstart, char rend, char c);
size_t		ft_strrlens(char *str, char rstart, char rend, char *set);
size_t		ft_strslen(char *str, char *set);
size_t		ft_strnlenb(char *str, size_t n);
size_t		ft_strslenb(char *str, char *set);
size_t		ft_strslenc(char *str, char *set, char c);
size_t		ft_strslenrev(char *str, char *set);
size_t		ft_strslens(char *str, char *stop, char *set);
size_t		ft_strwlen(char *str);
size_t		ft_strclenr(char *str, char c, char rstart, char rend);
size_t		ft_strclenrevc(char *str, char stop, char c);
size_t		ft_strclenrevr(char *str, char stop, char rstart, char rend);
size_t		ft_strclenrevs(char *str, char stop, char *set);
size_t		ft_strlenr(char *str, char rstart, char rend);
size_t		ft_strnlenr(char *str, size_t n, char rstart, char rend);
size_t		ft_strnlenrevr(char *str, long n, char rstart, char rend);
size_t		ft_strnlenrevs(char *str, long n, char *set);
size_t		ft_strrlenb(char *str, char rstart, char rend);
size_t		ft_strrlenrev(char *str, char rstart, char rend);
size_t		ft_strrlenrevc(char *str, char rstart, char rend, char c);
size_t		ft_strrlenrevs(char *str, char rstart, char rend, char *set);
size_t		ft_strslenr(char *str, char *set, char rstart, char rend);
size_t		ft_strslenrevc(char *str, char *set, char c);
size_t		ft_strslenrevr(char *str, char *set, char rstart, char rend);
size_t		ft_strslenrevs(char *str, char *set, char *set2);
size_t		ft_strwlenb(char *str);
size_t		ft_strwlenc(char *str, char c);
size_t		ft_strwlenr(char *str, char rstart, char rend);
size_t		ft_strwlenrev(char *str);
size_t		ft_strwlenrevc(char *str, char c);
size_t		ft_strwlenrevr(char *str, char rstart, char rend);
size_t		ft_strwlenrevs(char *str, char *set);
size_t		ft_strwlens(char *str, char *set);

size_t		ft_strcpy(char *dst, char *src);
size_t		ft_strncpy(char *dst, char *src, size_t len);
size_t		ft_strscpy(char *dst, char *src, char *set);

size_t		ft_strmatchc(char *str, char c);

size_t		ft_strnskip(char *str, size_t len);
size_t		ft_strskipc(char *str, char c);
size_t		ft_strskips(char *str, char *set);
size_t		ft_strskipw(char *str);
size_t		ft_strnskipc(char *str, size_t len, char c);
size_t		ft_strnskipr(char *str, size_t len, char rstart, char rend);
size_t		ft_strnskips(char *str, size_t len, char *set);
size_t		ft_strnskipw(char *str, size_t len);
size_t		ft_strskipr(char *str, char rstart, char rend);

void		ft_strprint(void *str);
void		ft_strnprint(char *str, size_t n);
void		ft_strwprint(char *str);

char		*ft_strstr(char *str, char *ndl);
char		*ft_strnstr(char *str, char *ndl, size_t n);
char		*ft_strreplace(char *org, char *before, char *after);

char		*ft_strnump(char *str, int *val);

int			ft_strcmp(void *str1, void *str2);
char		ft_strncmp(char *str, char *s2, size_t n);
char		ft_strccmp(char *str, char *s2, char c);

void		ft_strrev(char *str);

char		**ft_strcsplit(char *str, char c);
char		**ft_strssplit(char *str, char *set);
char		**ft_strwsplit(char *str, char c);
char		**ft_strnsplit(char *str, size_t n);

char		*ft_strinfix(char *dst, char *add, size_t index);
char		*ft_strprefix(char *str, char *prefix);
char		*ft_strsuffix(char *str, char *suffix);

char		*ft_strtrims(char *str, char *set);
char		*ft_strtrimsf(char *str, char *set);

int			ft_chrcprint(char c, char nope);
int			ft_chrcprintfd(char c, char nope, int fd);
int			ft_chrprint(char c);
int			ft_chrprintc(char c, char yes);
int			ft_chrprintfd(char c, int fd);
int			ft_chrprintfdc(char c, char yes, int fd);
int			ft_chrprintfds(char c, int fd, char *set);
int			ft_chrprints(char c, char *set);
int			ft_chrsprint(char c, char *set);

char		*ft_numstru_base(unsigned int num, char *base);
size_t		ft_numlenu_base(unsigned int num, int base);
char		*ft_numstr_base(int num, int base);
char		*ft_numstrul_base(unsigned long num, char *base);
size_t		ft_numlenul_base(unsigned long num, int base);
size_t		ft_numlen_base(int num, int base);
void		ft_strshift(char *str, long long shift);
void		ft_numprint(int nb);
void		ft_numprintbase(int nb, int base);
long long	ft_absnum(long long nb);
char		**ft_str2dup(char **str);
void		ft_str2prefix(char **str, char *prefix);
void		ft_str2suffix(char **str, char *suffix);
char		*ft_strgenc(char c, size_t len);
void		ft_strtrunc(char *start, size_t size);
char		*ft_strchr(char *str, char c);
t_list		*ft_str2convlst(char **str2);

void		*ft_plstnew(void *item, int priority);

void		*ft_pquepop(t_plist **list);
void		ft_pquepush(t_plist **list, void *item, int priority);
void		*ft_quepop(t_list **list);
void		ft_quepush(t_list **list, void *item);

void		*ft_pstkpop(t_plist **list);
void		ft_pstkpush(t_plist **list, void *item, int priority);
void		*ft_stkpop(t_list **list);
void		ft_stkpush(t_list **list, void *item);

void		ft_treeaddchild(t_tree *branch, t_tree *add);
void		ft_treeaddleft(t_tree *branch, t_tree *add);
void		ft_treeaddparent(t_tree **root, t_tree *add);
void		ft_treeaddright(t_tree *branch, t_tree *add);
t_tree		*ft_treebfirst(t_tree *root, int (*f)(void *item, void *cmp), t_list *queue, void *cmp);
t_tree		*ft_treenew(void *item);
void		ft_treeprint(t_tree *root, void (*print)(void *item));

HEAP		*ft_dlstnew(void *item, void *prev);
void		ft_dlstdel(t_dlist **head, t_dlist *del, void (*f)(void *item));
void		ft_dlstclearright(t_dlist **head, t_dlist *elem, void (*f)(void *item));
void		ft_dlstclearleft(t_dlist **head, t_dlist *elem, void (*f)(void *item));
void		ft_dlstadd(t_dlist **head, t_dlist *add);
void		ft_dlstaddback(t_dlist **head, t_dlist *add);
void		ft_dlistaddbehind(t_dlist *elem, t_dlist *add);
void		ft_dlstaddfront(t_dlist **head, t_dlist *add);
void		ft_dlistaddinfront(t_dlist *elem, t_dlist *add);
void		ft_dlstprint(t_dlist **head);
void		ft_dlstswap(t_dlist **head, t_dlist *a, t_dlist *b);

char		**ft_lstconvstr2(t_list *root);
t_list		*ft_lstlookup(t_list *root, char *str);
void		ft_lstinfix(t_list **list, t_list *add, size_t n);
long long	ft_lstindex(t_list *list, t_list *elem);
void		ft_lstprint(t_list *head, void (*p)(char *item));
void		ft_lstdel(t_list **list, t_list *elem, void (*del)(void *item));
char		ft_lstcmp(void *a, void *b, char (*cmp)(void *item1, void *item2));
size_t		ft_lstlen(t_list *list);
HEAP		*ft_lstnew(void *item);
t_list		*ft_lstnptr(t_list *list, size_t n);
void		ft_lstprefix(t_list **list, t_list *add);
void		ft_plstprefix(t_plist **list, t_plist *add);
t_list		*ft_lstprev(t_list **list, t_list *elem);
t_list		*ft_lstptr(t_list *list);
t_plist		*ft_plstptr(t_plist *list);
void		ft_lstrev(t_list **list);
void		ft_lstsuffix(t_list **list, t_list *add);
void		ft_plstsuffix(t_plist **list, t_plist *add);
void		ft_lstswap(t_list **list, t_list *a, t_list *b);

#endif
