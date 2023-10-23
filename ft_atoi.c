/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsampiet <lsampiet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 20:54:47 by lsampiet          #+#    #+#             */
/*   Updated: 2023/10/22 21:34:33 by lsampiet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isspace(int c)
{
	if (c == ' ' || c == '\f' || c == '\n'
		|| c == '\r' || c == '\t' || c == '\v')
		return (0);
	return (1);
}

int	atoi(const char *nptr)
{
	int	res;
	int	i;

	i = 0;
	while (*nptr)
	{
		if (isspace(nptr[i]) == 0)
			i++;
		if (nptr[i] >= '0' && nptr[i] <= '9')
			res = nptr[i + 0];
			i++;
	}
	return (res);
}
