/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqubarr <raqubarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:29:09 by raqubarr          #+#    #+#             */
/*   Updated: 2023/09/13 11:52:02 by raqubarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int c);

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("resultado de isalpha: %i\n", isalpha(argv[1][0]));
		printf("resultado de mi ft_isalpha: %i\n", ft_isalpha(argv[1][0]));
	}
}
