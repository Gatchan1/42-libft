/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_toupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqubarr <raqubarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 11:11:38 by raqubarr          #+#    #+#             */
/*   Updated: 2023/09/23 11:23:09 by raqubarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_toupper(int c);

int	main(int argc, char **argv)
{
	if (argc != 2)
		printf("argumento: una letra. Si es minuscula la pasa a mayuscula\n");
	if (argc == 2)
	{
		printf("resultado de ft_toupper: %c\n", ft_toupper(argv[1][0]));
		printf("resultado de toupper: %c\n", toupper(argv[1][0]));
	}
	return (0);
}
