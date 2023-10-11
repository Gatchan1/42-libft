/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqubarr <raqubarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 17:55:42 by raqubarr          #+#    #+#             */
/*   Updated: 2023/10/10 16:17:02 by raqubarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d_initial;
	size_t	d;
	size_t	s;

	d_initial = 0;
	while (dstsize <= ft_strlen(dst) && d_initial < dstsize)
		d_initial++;
	if (dstsize <= ft_strlen(dst))
		return (ft_strlen(src) + d_initial);
	while (dst[d_initial] != '\0')
		d_initial++;
	d = 0;
	s = 0;
	while (dst[d] != '\0' && d < dstsize - 1)
		d++;
	while (src[s] != '\0' && d < dstsize - 1)
	{
		dst[d] = src[s];
		d++;
		s++;
	}
	dst[d] = '\0';
	return (ft_strlen(src) + d_initial);
}

int	main(int argc, char **argv)
{
	int		n;
	char	*src = "que tal, como andamos";
	char	dst[50];
	
	dst[0] = 'h';
	dst[1] = 'o';
	dst[2] = 'l';
	dst[3] = 'a';
	dst[4] = '\0';
	if (argc != 2)
		printf("argumento: numero de caracteres a concatenar.\n");
	if (argc == 2)
	{
		n = atoi(argv[1]);
		printf("resultado de ft_strlcat: %lu\n", strlcat(dst, src, n));
		printf("dst resultante: %s\n", dst);
	}
	return (0);
}
