/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_putstr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqubarr <raqubarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:24:22 by raqubarr          #+#    #+#             */
/*   Updated: 2023/10/09 19:21:01 by raqubarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Argumento 1: una string\n");
		printf("Argumento 2: el file descriptor. Recomendado: 1\n");
	}
	if (argc == 3)
	{
		ft_putstr_fd(argv[1], atoi(argv[2]));
	}
	return (0);
}
