/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isdigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqubarr <raqubarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:49:04 by raqubarr          #+#    #+#             */
/*   Updated: 2023/09/13 13:54:37 by raqubarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int c);

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("resultado de ft_isdigit: %i\n", ft_isdigit(argv[1][0]));
		printf("resultado de isdigit: %i\n", isdigit(argv[1][0]));
	}
	return (0);
}
