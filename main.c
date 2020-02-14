/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 00:48:44 by tbruinem       #+#    #+#                */
/*   Updated: 2020/02/14 15:32:03 by tbruinem      ########   odam.nl         */
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

int		main(void)
{
	char	str[] = "bieba.boeba.banaantjes";

	ft_strlenf(str, ".s-r", "set", '0', '9');
	return (0);
}

/* int		main(void)
{
	char	str[] = "bieboooo";

	printf("%ld\n", ft_strnlenrevc(str, 5, 'o'));
	return (0);
} */
