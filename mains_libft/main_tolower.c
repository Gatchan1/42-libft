/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_tolower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqubarr <raqubarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 11:36:57 by raqubarr          #+#    #+#             */
/*   Updated: 2023/09/23 12:37:38 by raqubarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_tolower(int c);

int	main(int argc, char **argv)
{
	if (argc != 2)
		printf("argumento: una letra. Si es mayuscula la pasa a minuscula\n");
	if (argc == 2)
	{
		printf("resultado de ft_tolower: %c\n", ft_tolower(argv[1][0]));
		printf("resultado de tolower: %c\n", tolower(argv[1][0]));
	}
	return (0);
}
