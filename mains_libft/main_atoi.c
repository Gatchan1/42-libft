/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqubarr <raqubarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 18:11:43 by raqubarr          #+#    #+#             */
/*   Updated: 2023/09/25 19:14:55 by raqubarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str);

int	main(int argc, char **argv)
{
	if (argc != 2)
		printf("argumento: string numerica para atoi\n");
	if (argc == 2)
	{
		printf("resultado ft_atoi: %i\n", ft_atoi(argv[1]));
		printf("resultado atoi: %i\n", atoi(argv[1]));
	}
	return (0);
}
