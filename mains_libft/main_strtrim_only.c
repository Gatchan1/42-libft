/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strtrim_only.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqubarr <raqubarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 18:32:04 by raqubarr          #+#    #+#             */
/*   Updated: 2023/10/10 16:02:48 by raqubarr         ###   ########.fr       */
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
char	*ft_strchr(const char *s, int c)
{
	char	*p;

	while (*s != (char)c && *s != '\0')
		s++;
	if ((char)c != '\0' && *s == '\0')
		return (NULL);
	p = (char *)s;
	return (p);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	int		trim;

	i = 0;
	trim = 1;
	while (trim && s1[i])
	{
		if (set && ft_strchr(set, s1[i]))
			i++;
		else
			trim = 0;
	}
	j = ft_strlen(s1);
	trim = 1;
	while (trim && s1[i])
	{
		if (set && ft_strchr(set, s1[j - 1]))
			j--;
		else
			trim = 0;
	}
	return (ft_substr(s1, i, j - i));
}

int	main(int argc, char **argv)
{
	if (argc != 3)
		printf("arg1: string a recortar, arg2: set caracteres recortables\n");
	if (argc == 3)
		printf("resultado: %s\n", ft_strtrim(argv[1], argv[2]));
		if (argv[2][0] == '\0')
		printf("resultado es \"\"\n");
	return (0);
}
