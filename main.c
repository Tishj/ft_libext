/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 00:48:44 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/24 16:43:02 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libext.h"
#include <string.h>

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

int		main(int argc, char **input)
{
	int		fd;
	char	*str;
	int		ret;
	size_t	i;

	i = 1;
	if (argc != 2)
		return (1);
	fd = open(input[1], O_RDONLY);
	ret = ft_fdstrc(fd, &str, '\n');
	while (ret > -1)
	{
		printf("%s", str);
		if (ret == 1)
			printf("\n");
		free(str);
		str = NULL;
		if (ret == 0)
			break ;
		ret = ft_fdstrc(fd, &str, '\n');
		i++;
	}
	return (0);
}

/* int		main(void)
{
	char	str[] = "//b/";
	char	*str2;
	char	*ret;
	size_t	i;

	i = 0;
	str2 = ft_strdup(str);
	ret = ft_strtok(str, "/");
	while (ret)
	{
		printf("%ld | %s\n", i, ret);
		ret = ft_strtok(NULL, "/");
		i++;
	}
	printf("END OF MINE\n");
	i = 0;
	ret = strtok(str2, "/");
	while (ret)
	{
		printf("%ld | %s\n", i, ret);
		ret = strtok(NULL, "/");
		i++;
	}
	printf("END OF ORIG\n");
	return (1);
} */

/* int		main(void)
{
	char	str[] = "//yeet/this/is/a//test/.exe";
	char	*str2;
	char	*ret;
	size_t	i;

	i = 0;
	str2 = ft_strdup(str);
	ret = ft_strsep(str, "/");
	while (ret)
	{
		printf("%ld | %s\n", i, ret);
		ret = ft_strsep(NULL, "/");
		i++;
	}
	printf("\n");
	i = 0;
	ret = strsep(&str2, "/");
	while (ret)
	{
		printf("%ld | %s\n", i, ret);
		ret = strsep(&str2, "/");
		i++;
	}
	return (1);
} */

/* int		main(void)
{
	char	str[] = "lalalalalalala";
	char	*s1;
	char	**str2;

	str2 = ft_strnsplit(str, 3);
	ft_str2print(str2);
	s1 = ft_strchaindelimc(str2, ',');
	ft_strprint(s1);
	return (0);
} */

/* int		main(void)
{
	t_list	*lst;
	t_list	*elem;
	char	s1[] = "lalal";
	char	s2[] = "gwdjkf";

	lst = ft_lstnew("one");
	ft_lstsuffix(&lst, ft_lstnew("two"));
	ft_lstprefix(&lst, ft_lstnew("three"));
	ft_lstprefix(&lst, ft_lstnew("four"));
	elem = ft_lstnew("findme");
	ft_lstinfix(&lst, elem, 0);
	ft_lstprint(lst, &ft_strprint);
//	printf("index of elem is: %lld\n", ft_lstindex(lst, elem));
	printf("size of list: %ld\n", ft_lstlen(lst));
	ft_lstswap(&lst, lst, lst->next->next->next);
	ft_lstprint(lst, &ft_strprint);
	return (1);
} */

/* int		main(void)
{
	char	s1[] = "lalaba";
	char	s2[] = "lalala";

	return (printf("return of strccmp = %d\n", (int)ft_strccmp(s1, s2, 'c')));
} */

/* int		main(void)
{
	char	str[] = "bieboooo";

	printf("%ld\n", ft_strnlenrevc(str, 5, 'o'));
	return (0);
} */
