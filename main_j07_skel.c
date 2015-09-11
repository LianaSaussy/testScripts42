/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecousine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/10 09:47:53 by ecousine          #+#    #+#             */
/*   Updated: 2015/09/10 21:00:29 by jbyttner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src);

int main(void)//(int argc, char **argv)
{
	/* uncomment as you progress */
	char	*exNO = "\n=== Ex\%02d ===\n";

	
	printf(exNO, 0); /*`
	
	printf("\n|%s| == |%s|\n", ft_strdup("a string to copy\n")
			, strdup("a string to copy\n"));
	printf("%d != %d", ft_strdup(exNO), ft_strdup(exNO));

	`*/ printf(exNO, 1); /*`
	
	int i = 0;
	int *tab_range = ft_range(-5, 8);
	printf("Our tab range (%d to %d):\n", -1, 8);
	while (i < 13)
	{
		printf("%d\n", tab_range[i]);
		i++;
	}
	printf("\n");
	
	`*/ printf("=== Ex02 ===\n"); /*`
	int *a_tab;
	int size;
	i = 0;
	a_tab = NULL;
	size = ft_ultimate_range(&a_tab, 1, 4);
	while (i < 3)
	{
		printf("%d\n", a_tab[i]);
		i++;
	}

	`*/ printf(exNO, 3); /*`
	printf("=== Ex03 ===\n");
	printf("%s", ft_concat_params(argc, argv));
	`*/ printf(exNO, 4); /*`
	`*/ printf(exNO, 5); /*`
	`*/ printf(exNO, 6); /*`
	`*/ printf(exNO, 7); /*`
	`*/
}
