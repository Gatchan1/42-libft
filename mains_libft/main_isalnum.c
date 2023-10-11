/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isalnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqubarr <raqubarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:01:05 by raqubarr          #+#    #+#             */
/*   Updated: 2023/09/13 14:15:26 by raqubarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isalnum(int c);

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("resultado de ft_isalnum: %i\n", ft_isalnum(argv[1][0]));
		printf("resultado de isalnum: %i\n", isalnum(argv[1][0]));
	}
	return (0);
}
