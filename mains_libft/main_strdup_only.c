/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strdup_only.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqubarr <raqubarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 16:49:13 by raqubarr          #+#    #+#             */
/*   Updated: 2023/10/10 16:02:48 by raqubarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("strlen: %lu\n", ft_strlen(argv[1]));
		printf("string copiada: %s\n", ft_strdup(argv[1]));
	}
	return (0);
}
