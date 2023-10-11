/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_substr_only.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqubarr <raqubarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:33:47 by raqubarr          #+#    #+#             */
/*   Updated: 2023/10/10 16:02:48 by raqubarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
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

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*dst_t;
	char	*src_t;

	src_t = (char *)src;
	dst_t = (char *)dst;
	i = 0;
	if (src == dst)
		return (dst);
	while (i < n)
	{
		dst_t[i] = src_t[i];
		i++;
	}
	return (dst);
}

char	*ft_strdup(const char *s1)
{
	char	*s2;

	s2 = malloc(ft_strlen(s1) + 1);
	if (!s2)
		return (NULL);
	ft_memcpy(s2, s1, ft_strlen(s1) + 1);
	return (s2);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	sub = malloc(len + 1);
	if (!sub)
		return (NULL);
	i = 0;
	while (i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

int	main(int argc, char **argv)
{
	int	arg2;
	int	arg3;

	if (argc != 4)
	{
		printf("argumento 1: una string, de la que crearemos una substring.\n");
		printf("argumento 2: posicion de comienzo de la substring\n");
		printf("argumento 3: num de posiciones a copiar\n");
	}
	if (argc == 4)
	{
		arg2 = atoi(argv[2]);
		arg3 = atoi(argv[3]);
		printf("resultado: %s\n", ft_substr(argv[1], arg2, arg3));
	}
	return (0);
}
