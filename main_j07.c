/ ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_j07.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyttner <jbyttner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/10 15:41:26 by jbyttner          #+#    #+#             */
/*   Updated: 2015/09/10 15:42:05 by jbyttner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

char	*ft_strdup(char *src);

int		main(void)
{
	char *src;
	char *copy;

	src = "Hello World!";
	copy = ft_strdup(src);
	printf("\n%d src, %d copy, %s str value, %s copy value\n", src, copy, src, copy);
	return (0);
}
