/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqubarr <raqubarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:06:51 by raqubarr          #+#    #+#             */
/*   Updated: 2023/09/13 15:08:18 by raqubarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int	ft_isprint(int c);

int	main(int argc, char **argv)
{
	int	n;

	if (argc == 2)
	{
		n = atoi(argv[1]);
		printf("aviso: este main esta pensado para pasarle un NUMERO\n");
		printf("dara ok del 32 al 126\n");
		printf("resultado de ft_isprint: %i\n", ft_isprint(n));
		printf("resultado de isprint: %i\n", isprint(n));
		printf("atoi: %i\n", n);
	}
	return (0);
}
