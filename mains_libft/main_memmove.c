/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqubarr <raqubarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 12:15:17 by raqubarr          #+#    #+#             */
/*   Updated: 2023/10/10 15:43:02 by raqubarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len);

int	main(int argc, char **argv)
{
	char	arr1[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 0};
	char    arr2[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 0};
	char    arr3[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 0};
	char	*src;
	char	*dst;
	int		n;
	int		dst_pos = 1;
	int		src_pos = 4;

	if (argc != 2)
		printf("argumento: numero de bytes a copiar.\n");
	if (argc == 2)
	{
		n = atoi(argv[1]);
		dst = &arr1[dst_pos];
		src = &arr1[src_pos];
		printf("resultado de ft_memmove: %.*s\n", n, ft_memmove(dst, src, n));
		dst = &arr2[dst_pos];
        src = &arr2[src_pos];
		printf("resultado de memmove: %.*s\n", n, memmove(dst, src, n));
		dst = &arr3[dst_pos];
        src = &arr3[src_pos];
		printf("resultado de memcpy: %.*s\n", n, memcpy(dst, src, n));
		//I dont understand why memcpy doesnt seem to give me trouble...
	}
	return (0);
}
