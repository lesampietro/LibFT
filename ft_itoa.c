/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsampiet <lsampiet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 22:11:36 by lsampiet          #+#    #+#             */
/*   Updated: 2023/10/31 16:48:13 by lsampiet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
