/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsampiet <lsampiet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 20:54:47 by lsampiet          #+#    #+#             */
/*   Updated: 2023/10/25 18:40:52 by lsampiet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{	
	if ((c >= 9 && c <= 13) || (c == ' '))
		return (1);
	return (0);
}

int	ft_issign(char c)
{
	if ((c == '-') || (c == '+'))
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int	res;
	int	i;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	while (ft_isspace(nptr[i]))
		i++;
	if (ft_issign(nptr[i]))
	{
		if (nptr[i] == '-')
				sign = -1;
		i++;
	}
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		res = res * 10 + (nptr[i] - '0');
		i++;
	}
	return (res * sign);
}
