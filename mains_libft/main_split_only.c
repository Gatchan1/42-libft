/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _ft_split_pruebas.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqubarr <raqubarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 18:08:43 by raqubarr          #+#    #+#             */
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

// vvv retorna el num de substrings que necesitare.
int	f_words(const char *s, int c)
{
	int	i;
	int	num;
	int	bloq;

	i = 0;
	num = 0;
	bloq = 0;
	while (s[i] != '\0')
	{
		if (s[i] != (char)c && bloq == 0)
		{
			bloq = 1;
			num++;
		}
		if (s[i] == (char)c)
			bloq = 0;
		i++;
	}
	return (num);
}

// vvv retorna el index que corresponde al char encontrado.
int	f_stop(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != (char)c && s[i] != '\0')
		i++;
	return (i);
}

char	**f_free(char	**arr, int i)
{
	while (i >= 0)
	{
		free(arr[i]);
		i--;
	}
	free(arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		i;
	int		advance;

	array = malloc((f_words(s, c) + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	i = 0;
	advance = 0;
	while (i < f_words(s, c))
	{
		if (s[advance] == c)
			advance++;
		else
		{
			array[i] = ft_substr(s, advance, f_stop(s + advance, c));
			if (!array[i])
				return (f_free(array, i));
			i++;
			advance += f_stop(s + advance, c);
		}
	}
	array[i] = (NULL);
	return (array);
}

int	main(int argc, char **argv)
{
	int i;
	char **array;
    int vueltas;
	
	if (argc != 3)
		printf("arg1: string to be split, arg2: char delimitador\n");
	if (argc == 3)
	{
        vueltas = f_num(argv[1], argv[2][0]);
		printf("vueltas: %i\n", vueltas);
		array = ft_split(argv[1], argv[2][0]);
		i = 0;
		while (i < vueltas)
        {
			printf("string %i: %s\n", i, array[i]);
            i++;
        }
	}
	return (0);
}