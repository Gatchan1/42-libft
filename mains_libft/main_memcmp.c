/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqubarr <raqubarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 18:05:30 by raqubarr          #+#    #+#             */
/*   Updated: 2023/09/23 18:49:25 by raqubarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n);

int	main(int argc, char **argv)
{
	int	n;

	if (argc != 4)
		printf("arg1: str1,\narg2: str2,\narg3: supuesta longitud de ambas\n");
	if (argc == 4)
	{
		n = atoi(argv[3]);
		printf("resultado ft_memcmp: %i\n", ft_memcmp(argv[1], argv[2], n));
	}
	return (0);
}
