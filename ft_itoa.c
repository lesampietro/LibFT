/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsampiet <lsampiet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 22:11:36 by lsampiet          #+#    #+#             */
/*   Updated: 2023/11/13 13:44:58 by lsampiet         ###   ########.fr       */
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

char	*ft_makestr(int n, int digits, char *str)
{
	int		begin;
	long	max;

	begin = 0;
	max = n;
	str[digits] = '\0';
	if (max < 0)
	{
		str[0] = '-';
		begin = 1;
		max *= -1;
	}
	while (digits > begin)
	{
		str[digits - 1] = (max % 10) + '0';
		max /= 10;
		digits--;
	}
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
	return (ft_makestr(n, size, str));
}
