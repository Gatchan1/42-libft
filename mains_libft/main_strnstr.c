/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqubarr <raqubarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:25:52 by raqubarr          #+#    #+#             */
/*   Updated: 2023/10/10 16:19:03 by raqubarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && i + j < len)
		{
			j++;
			if (j == ft_strlen(needle))
				return ((char *)haystack + i);
		}
		i++;
	}
	return (NULL);
}

int	main(int argc, char **argv)
{
	int	n;

	if (argc != 4)
	{
		printf("argument 1: string to be searched (haystack)\n");
		printf("argument 2: string to be located (needle)\n");
		printf("argument 3: length to search on\n");
	}
	if (argc == 4)
	{
		n = atoi(argv[3]);
		printf("resultado ft_strnstr: %s\n", ft_strnstr(argv[1], argv[2], n));
	}
	return (0);
}
