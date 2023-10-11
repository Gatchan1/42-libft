/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqubarr <raqubarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 13:05:36 by raqubarr          #+#    #+#             */
/*   Updated: 2023/09/23 14:17:26 by raqubarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c);

int	main(int argc, char **argv)
{
	if (argc != 3)
		printf("arg1: una string, arg2: un char a buscar en la misma\n");
	if (argc == 3)
	{
		printf("resultado de ft_strchr: %s", ft_strchr(argv[1], argv[2][0]));
	}
	return (0);
}
