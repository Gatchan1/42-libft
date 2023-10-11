/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqubarr <raqubarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:42:53 by raqubarr          #+#    #+#             */
/*   Updated: 2023/09/19 17:21:39 by raqubarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n);

int	main(int argc, char **argv)
{
	int			n;
	void		*dest;
	const void	*source;

	dest = (char *)malloc(21);
	source = "abcdefghijklmnopqrst";
	if (argc != 2)
		printf("poner un argumento: un numero del 0 al 20\n");
	if (argc == 2)
	{
		n = atoi(argv[1]);
		printf("argumento: numero de bytes a copiar.\n");
		printf("string src: 'abcdefghijklmnopqrst' (20 chars)\n");
		printf("resultado ft_memcpy: %s\n", (char *)ft_memcpy(dest, source, n));
		printf("resultado de memcpy: %s\n", (char *)memcpy(dest, source, n));
	}
	return (0);
}
