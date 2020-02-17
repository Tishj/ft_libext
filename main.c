/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 00:48:44 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/17 01:17:46 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"

/* int		main(void)
{
	char	str[] = "Ministerie der sskere tijden";
	char	s2[] = "skere";
	char	*res;

	ft_strprint(str + (21 - ft_strlen(s2)));
	res = ft_strnstr(str, s2, 21);
	if (res)
		printf("%s\n", res);
	else
		printf("(null)\n");
	return (1);
} */

/* int		main(void)
{
	char	*str;

	str = ft_strdup("biebabanaantjes");
	ft_strprint(str);
	str = ft_strinfix(str, str, ft_strlen(str));
	ft_strprint(str);
	return (0);
} */

/* int		main(void)
{
	char	str[] = "la la ba ba";

	ft_strshift(str, 5);
	ft_strprint(str);
	return (1);
} */

/* int		main(void)
{
	char	*str;

	str = ft_strdup("blabla:");
	str = ft_straddr(str, '0', '9');
	ft_strprint(str);
	free(str);
	return (0);
} */

/* int		main(void)
{
	char	str[] = "b5yg354jh3g4h53g4j5g34jh5g346346j30g64jdg3jh46g";
	size_t	len;
	len = ft_strlenf(str, "-nc.-sc", 12, 'c', "012", 'd');
//	len = strlen(str);
	printf("length is: %ld\n", len);
	return (0);
} */

int		main(void)
{
	t_list	*lst;
	t_list	*elem;
	char	s1[] = "lalal";
	char	s2[] = "gwdjkf";

	lst = ft_lstnew(s1);
	ft_lstprefix(&lst, ft_lstnew(s2));
	ft_lstprefix(&lst, ft_lstnew(s1));
	ft_lstprefix(&lst, ft_lstnew(s2));
	elem = ft_lstnew(ft_strdup("findme"));
	ft_lstinfix(&lst, elem, 3);
	ft_lstprint(lst, &ft_strprint);
	printf("index of elem is: %lld\n", ft_lstindex(lst, elem, 0));
	return (1);
}

/* int		main(void)
{
	char	str[] = "bieboooo";

	printf("%ld\n", ft_strnlenrevc(str, 5, 'o'));
	return (0);
} */
