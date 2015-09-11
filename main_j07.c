/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecousine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/10 09:47:53 by ecousine          #+#    #+#             */
/*   Updated: 2015/09/11 02:09:43 by jbyttner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src);
int		*ft_range(int min, int max);
char	*ft_concat_params(int argc, char **argv);
char	**ft_split_whitespaces(char *str);
void	ft_print_words_tables(char **tab);

int main(int argc, char **argv)
{
	/* uncomment as you progress */
	char	*exNO = "\n=== Ex\%02d ===\n";

	
	printf(exNO, 0); 
	
	printf("\n|%s| == |%s|\n", ft_strdup("a string to copy\n")
			, strdup("a string to copy\n"));
	printf("%d != %d", (int)ft_strdup(exNO), (int)ft_strdup(exNO));

	printf(exNO, 1);
	
	int i = 0;
	int *tab_range = ft_range(-5, 8);
	printf("Our tab range (%d to %d):\n", -5, 8);
	while (i < 8 + 5)
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
	printf("\nSize =  %d\n", size);

	printf(exNO, 3); 
	printf("%s", ft_concat_params(argc, argv));
	printf(exNO, 4); 
	char **splitstr;
	char **splitstr_start;
	splitstr = ft_split_whitespaces(" 1  esdasad\newr\n\t\t  34ersdf sdf  ");
	splitstr_start = splitstr;
	while (*splitstr != 0)
	{
		printf("|%s|\n", *splitstr++);
	}
	 printf(exNO, 5); 
	 splitstr = splitstr_start;
	ft_print_words_tables(splitstr);
	 printf(exNO, 6); /*`
	`*/ printf(exNO, 7); /*`
	`*/
}
