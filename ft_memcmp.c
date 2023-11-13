/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsampiet <lsampiet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 23:34:55 by lsampiet          #+#    #+#             */
/*   Updated: 2023/11/13 19:25:53 by lsampiet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	int				a;
	int				x;

	a = 0;
	x = (int)n;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (x == 0)
		return (0);
	while (a < (x - 1) && str1[a] == str2[a])
		a++;
	if (str1[a] == str2[a])
		return (0);
	return ((int)(str1[a] - str2[a]));
}
