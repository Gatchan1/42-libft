/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_itoa_only.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqubarr <raqubarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 12:26:01 by raqubarr          #+#    #+#             */
/*   Updated: 2023/10/11 12:33:04 by raqubarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static int	f_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		result *= nb;
		power--;
	}
	return (result);
}

static int	f_len(int n)
{
	int	minus;
	int	i;

	minus = 0;
	i = 0;
	if (n < 0)
	{
		minus = 1;
		n *= -1;
	}
	while (n / 10 > 0)
	{
		n /= 10;
		i++;
	}
	return (i + 1 + minus);
}

static char	*f_exception(void)
{
	char	*str;

	str = malloc(12 * sizeof(char));
	if (!str)
		return (NULL);
	str[0] = '-';
	str[1] = '2';
	str[2] = '1';
	str[3] = '4';
	str[4] = '7';
	str[5] = '4';
	str[6] = '8';
	str[7] = '3';
	str[8] = '6';
	str[9] = '4';
	str[10] = '8';
	str[11] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	int		i;
	int		n2;
	int		len;
	char	*str;

	i = 0;
	if (n == -2147483648)
		return (f_exception());
	len = f_len(n);
	if (n < 0)
		i = 1;
	n = n * f_power(-1, i);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (i == 1)
		str[0] = '-';
	while (i < len)
	{
		n2 = n;
		str[i] = '0' + ((n / (f_power(10, len - i - 1))) % 10);
		i++;
	}
	str[i] = '\0';
	return (str);
}

int main(int argc, char **argv)
{
    if (argc != 2)
		printf("argumento: numero (varios digitos)\n");
	if (argc == 2)
		printf("resultado: %s\n", ft_itoa(atoi(argv[1])));
	return (0);
}