/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_calloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqubarr <raqubarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:08:33 by raqubarr          #+#    #+#             */
/*   Updated: 2023/10/10 16:10:21 by raqubarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*schar;

	i = 0;
	schar = s;
	while (i < n)
	{
		schar[i] = '\0';
		i++;
	}
}

void	*ft_calloc(size_t count, size_t size)
{
	char	*p;

	p = malloc(count * size);
	if (!p)
		return (NULL);
	ft_bzero(p, count * size);
	return ((void *)p);
}

int	main(int argc, char **argv)
{
	int		argv1;
	int		argv2;
	char	*p1;
	char	*p2;
	int		i;

	if (argc != 3)
		printf("arg1: num of objects, arg2: byte size of each object\n");
	if (argc == 3)
	{
		argv1 = atoi(argv[1]);
		argv2 = atoi(argv[2]);
		printf("resultado de ft_calloc: \n");
		p1 = ft_calloc(argv1, argv2);
		i = 0;
		while (i < (argv1 * argv2))
		{
			if (p1[i] == '\0')
				printf("0");
			i++;
		}
		printf("\n");
		printf("resultado de calloc: \n");
		p2 = calloc(argv1, argv2);
		i = 0;
		while (i < (argv1 * argv2))
		{
			if (p2[i] == '\0')
				printf("0");
			i++;
		}
		printf("\n");
	}
	return (0);
}

/* pese a haber hecho este main chulisimo, cuando quito el bzero de mi
 * calloc no veo diferencias. Supongo que habria que hacer cosas mas
 * complejas para poder verlo, pero chica, bastante currado esta ya
 * este main... */
