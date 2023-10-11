/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strmapi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqubarr <raqubarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:58:51 by raqubarr          #+#    #+#             */
/*   Updated: 2023/10/06 13:33:47 by raqubarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

char	f_change(unsigned int i, char c)
{
	return (c + i);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		printf("argumento: una string. Sugerencia: aaaaa\n");
	if (argc == 2)
	{
		printf("resultado: %s\n", ft_strmapi(argv[1], f_change));
	}
	return (0);
}
