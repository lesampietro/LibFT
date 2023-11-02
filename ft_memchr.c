/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsampiet <lsampiet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:48:12 by lsampiet          #+#    #+#             */
/*   Updated: 2023/11/01 23:32:08 by lsampiet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*mem;
	int				a;

	a = 0;
	mem = (unsigned char *)s;
	while (n >= 0 && mem[a] != '\0')
	{
		if (mem[a] == (unsigned char)c)
			return ((unsigned char *)mem + a);
		a++;
		n--;
	}
	if (!mem[a])
		return (NULL);
	return ((unsigned char *)mem + n);
}
