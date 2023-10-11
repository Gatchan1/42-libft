/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqubarr <raqubarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:02:12 by raqubarr          #+#    #+#             */
/*   Updated: 2023/09/20 20:22:41 by raqubarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len);

int	main(int argc, char **argv)
{
	char	c;
	char	len;
	char	s[20];

	if (argc != 3)
	{
		printf("arg1: char q se va a copiar, arg2: veces q se va a copiar\n");
		printf("(max: 20)\n");
	}
	if (argc == 3)
	{
		c = argv[1][0];
		len = atoi(argv[2]);
		printf("resultado de ft_memset: %s\n", ft_memset(s, c, len));
		printf("resultado de memset: %s\n", memset(s, c, len));
	}
	return (0);
}
