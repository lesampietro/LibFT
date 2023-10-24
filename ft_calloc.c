/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsampiet <lsampiet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:38:39 by lsampiet          #+#    #+#             */
/*   Updated: 2023/10/23 22:04:36 by lsampiet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total_size;
	int		i;

	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (ptr != NULL)
	{
		i = 0;
		while (i < total_size)
		{
			((unsigned char *)ptr)[i] = 0;
			i++;
		}
	}
	return (ptr);
}
