/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecousine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/10 09:47:53 by ecousine          #+#    #+#             */
/*   Updated: 2015/09/10 16:05:45 by jbyttner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strdup(char *src);

int main(void)//(int argc, char **argv)
{
	char	*exNO = "\n=== Ex\%02d ===\n";
	printf(exNO, 0);
	printf("%s", ft_strdup("a string to copy\n"));

/*	printf("=== Ex01 ===\n");
	int i = 0;
	int *tab_range = ft_range(-5, 8);
	while (i < 13)
	{
		printf("%d\n", tab_range[i]);
		i++;
	}
	printf("\n");

	printf("=== Ex02 ===\n");
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

	printf("=== Ex03 ===\n");
	printf("%s", ft_concat_params(argc, argv));*/
}
