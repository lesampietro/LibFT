/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsampiet <lsampiet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 05:00:49 by lsampiet          #+#    #+#             */
/*   Updated: 2023/10/27 05:42:54 by lsampiet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int				i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = s1;
	str2 = s2;
	if (n == 0)
		return (0);
	if (n < i)
	{
		while (str1[i] == str2[i])
			i++;
	}	
	else
	{
		while (i < (n - 1) && str1[i] != '\0' && str1[i] == str2[i])
			i++;
	}
	return ((int)(str1[i] - str2[i]));
}
