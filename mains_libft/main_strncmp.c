/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqubarr <raqubarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 16:11:39 by raqubarr          #+#    #+#             */
/*   Updated: 2023/09/23 17:09:06 by raqubarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n);

int	main(int argc, char **argv)
{
	int	n;

	if (argc != 4)
		printf("arg1: str1, arg2: str2, arg3: num de caracteres a comparar\n");
	if (argc == 4)
	{
		n = atoi(argv[3]);
		printf("si s1>s2 resultado positivo; si s1<s2 resultado negativo\n");
		printf("resultado ft_strncmp: %i\n", ft_strncmp(argv[1], argv[2], n));
		printf("resultado strncmp: %i\n", strncmp(argv[1], argv[2], n));
	}
	return (0);
}
