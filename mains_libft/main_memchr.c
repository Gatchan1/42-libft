/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqubarr <raqubarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 17:11:26 by raqubarr          #+#    #+#             */
/*   Updated: 2023/09/23 18:03:39 by raqubarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n);

int	main(int argc, char **argv)
{
	int	n;

	if (argc != 3)
		printf("arg1: string, arg2: char a buscar, arg3: longitud a buscar\n");
	if (argc == 4)
	{
		n = atoi(argv[3]);
		printf("resultado ft_memchr: %s\n", ft_memchr(argv[1], argv[2][0], n));
	}
	return (0);
}
