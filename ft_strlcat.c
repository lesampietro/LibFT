/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsampiet <lsampiet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 20:04:11 by lsampiet          #+#    #+#             */
/*   Updated: 2023/10/27 00:25:52 by lsampiet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	j = 0;
	k = 0;
	while (dst[i] != '\0' && i < size)
		i++;
	while (src[j] != '\0')
		j++;
	if ((i + 1) == size || j == size)
		return (i + j);
	if ((i + j) < size)
	{
		while (src[k] != '\0' && (i + k) < size)
		{
			dst[i + k] = src[k];
			k++;
		}
		dst[i + k] = '\0';
	}
	return (i + j);
}

