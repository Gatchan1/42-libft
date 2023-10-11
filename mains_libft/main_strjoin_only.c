/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqubarr <raqubarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 17:37:26 by raqubarr          #+#    #+#             */
/*   Updated: 2023/10/10 16:15:20 by raqubarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*sjoin;
	size_t	i;
	size_t	j;
	size_t	len;

	len = ft_strlen(s1) + ft_strlen(s2);
	sjoin = malloc(len + 1);
	if (!sjoin)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s1))
	{
		sjoin[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < ft_strlen(s2))
	{
		sjoin[i] = s2[j];
		i++;
		j++;
	}
	sjoin[i] = '\0';
	return (sjoin);
}

int	main(int argc, char **argv)
{
	if (argc != 3)
		printf("arg1: string primera, arg2: string final");
	if (argc == 3)
		printf("resultado ft_strjoin: %s\n", ft_strjoin(argv[1], argv[2]));
	return (0);
}
