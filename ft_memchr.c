/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsampiet <lsampiet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:48:12 by lsampiet          #+#    #+#             */
/*   Updated: 2023/11/09 15:10:26 by lsampiet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*mem;
	size_t			a;

	a = 0;
	mem = (unsigned char *)s;
	if (n == 0)
		return (NULL);
	while (a < (n - 1) && mem[a] != (unsigned char)c)
		a++;
	if (mem[a] == (unsigned char)c)
		return ((void *)mem + a);
	return (NULL);
}
