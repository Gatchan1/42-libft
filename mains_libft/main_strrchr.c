/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqubarr <raqubarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 14:10:24 by raqubarr          #+#    #+#             */
/*   Updated: 2023/09/23 16:13:09 by raqubarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c);

int	main(int argc, char **argv)
{
	if (argc != 3)
		printf("arg1: una string; arg2: un char a buscar, desde el final\n");
	if (argc == 3)
		printf("resultado ft_strrchr: %s\n", ft_strrchr(argv[1], argv[2][0]));
	return (0);
}
