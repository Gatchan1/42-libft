/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_putnbr_fd_only.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqubarr <raqubarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 19:57:25 by raqubarr          #+#    #+#             */
/*   Updated: 2023/10/11 12:34:10 by raqubarr         ###   ########.fr       */
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

void    ft_putnbr_fd(int n, int  fd)
{
    long int    num;

    num = n;
    if (num < 0)
    {
        ft_putchar_fd('-', fd);
        num *= -1;
    }
    if (num >= 10)
    {
        ft_putnbr_fd(num / 10, fd);
        ft_putchar_fd('0' + (num % 10), fd);
    }
    else
        ft_putchar_fd('0' + num, fd);
}

int	main(int argc, char **argv)
{
	if (argc != 3)
		printf("arg1: num (varios digitos), arg2: file descriptor (ej: 1)");
	if (argc == 3)
		ft_putnbr_fd(atoi(argv[1]), atoi(argv[2]));
	return (0);
}