/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_striteri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqubarr <raqubarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:45:34 by raqubarr          #+#    #+#             */
/*   Updated: 2023/10/06 14:08:44 by raqubarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*));

void	f_change(unsigned int i, char *c)
{
	*c += i;
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		printf("Argumento: una string. Recomendacion: aaaaa\n");
	if (argc == 2)
	{
		ft_striteri(argv[1], f_change);
		printf("resultado: %s\n", argv[1]);
	}
	return (0);
}
