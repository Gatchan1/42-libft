/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isascii.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqubarr <raqubarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:37:30 by raqubarr          #+#    #+#             */
/*   Updated: 2023/09/13 14:54:10 by raqubarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int	ft_isascii(int c);

int	main(int argc, char **argv)
{
	int	n;

	if (argc == 2)
	{
		n = atoi(argv[1]);
		printf("aviso: este main esta pensado para pasarle un NUMERO\n");
		printf("dara ok del 0 al 127, y false a partir del 127\n");
		printf("resultado de ft_isascii: %i\n", ft_isascii(n));
		printf("resultado de isascii: %i\n", isascii(n));
		printf("atoi: %i\n", n);
	}
	return (0);
}
