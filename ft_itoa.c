/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsampiet <lsampiet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 22:11:36 by lsampiet          #+#    #+#             */
/*   Updated: 2023/10/25 18:35:58 by lsampiet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_count_digits(int n)
{
	int	digits;

	digits = 0;
	if (n == -2147483648)
	{
		n = (n / 10) * -1;
		digits += 2;
	}
	if (n < 0)
	{
		n *= -1;
		digits++;
	}
	while (n >= 10)
	{
		n /= 10;
		digits++;
	}
	digits++;
	return (digits);
}
// About ft_count_digits() first if (treating long_min):
// divide by ten to count the "-"
// transform in negative number so it enters next if

void	*ft_makestr(int n, int size, char *str)
{
	int		i;
	int		neg;
	long	max;

	i = size;
	max = n;
	while ((i - 1) >= 0)
	{
		if (max < 0)
		{
			max *= -1;
			neg = 1;
		}
		str[i - 1] = (max % 10) + '0';
		max /= 10;
		i--;
	}
	if (neg == 1)
		str[0] = '-';
	str[size] = '\0';
	return (str);
}

// Max and min int values can be transformed into a long int variable
// in order to have them treated

char	*ft_itoa(int n)
{
	char	*str;
	int		size;

	size = ft_count_digits(n);
	str = malloc((size + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_makestr(n, size, str);
	return (str);
}

// int main(void)
// {
// 	char *res = ft_itoa(156);
// 	char *res2 = ft_itoa(-623);
// 	char *res3 = ft_itoa(-0);

// 	printf("resposta: %s", res);
// 	printf("resposta: %s", res2);
// 	printf("resposta: %s", res3);
// 	free(res);
// 	free(res2);
// 	free(res3);
// }
