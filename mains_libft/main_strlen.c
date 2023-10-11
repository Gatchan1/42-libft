/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqubarr <raqubarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:21:39 by raqubarr          #+#    #+#             */
/*   Updated: 2023/09/20 20:18:08 by raqubarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s);

int	main(int argc, char **argv)
{
	if (argc != 2)
		printf("argumento: una string");
	if (argc == 2)
	{
		printf("resultado de ft_strlen: %zu\n", ft_strlen(argv[1]));
		printf("resultado de strlen: %zu\n", strlen(argv[1]));
	}
	return (0);
}
