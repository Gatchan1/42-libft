/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_putchar_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqubarr <raqubarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:53:29 by raqubarr          #+#    #+#             */
/*   Updated: 2023/10/06 17:01:27 by raqubarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_putchar_fd(char c, int fd);

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Argumento 1: un char\n");
		printf("Argumento 2: el file descriptor. Recomendado: 1\n");
	}
	if (argc == 3)
	{
		ft_putchar_fd(argv[1][0], atoi(argv[2]));
	}
}
