/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqubarr <raqubarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 20:19:26 by raqubarr          #+#    #+#             */
/*   Updated: 2023/09/20 20:24:20 by raqubarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	ft_bzero(void *s, size_t n);

int	main(int argc, char **argv)
{
	char	c;
	char	s[20];
	int		i;

	if (argc != 2)
		printf("argumento: num de ceros a copiar. (max 20)\n");
	if (argc == 2)
	{
		c = atoi(argv[1]);
		ft_bzero(s, c);
		printf("resultado de ft_bzero:\n");
		while (i < c)
		{
			printf("%i", s[i]);
			i++;
		}
	}
	return (0);
}
