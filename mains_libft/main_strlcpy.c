/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqubarr <raqubarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:34:20 by raqubarr          #+#    #+#             */
/*   Updated: 2023/09/23 12:34:47 by raqubarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);

int	main(int argc, char **argv)
{
	size_t	n;
	char	dst1[20];
	char	dst2[20];
	char	*src = "holaquetal,adios123";

	if (argc != 2)
		printf("argumento: numero que incluye espacio para\n");
   		printf("caracteres a copiar + un nulo final. (max 20)\n");
	if (argc == 2)
	{
		n = atoi(argv[1]);
		printf("resultado de ft_strlcpy: %lu\n", ft_strlcpy(dst1, src, n));
		printf("dst tras ft_strlcpy: %s\n", dst1);
		printf("resultado de strlcpy: %lu\n", strlcpy(dst2, src, n));
		printf("dst tras strlcpy: %s\n", dst2);
	}
}
