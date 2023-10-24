/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsampiet <lsampiet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:38:39 by lsampiet          #+#    #+#             */
/*   Updated: 2023/10/23 20:44:05 by lsampiet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*str;

	if (!str)
		return (str);
	if ((nmemb == 0) || (size == 0))
		return (str);
	else if (str != 0)
		str = (char *)malloc(nmemb * sizeof(int));
	return (str);
}

// int	main()
// {
// 	int				ptr;
// 	unsigned int	nmemb;

// 	ptr = 8792791;
// 	nmemb = 20;
// 	*ft_calloc(nmemb, ptr);
// 	return (0);
// }
