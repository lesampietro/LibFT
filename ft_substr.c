/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsampiet <lsampiet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 23:45:36 by lsampiet          #+#    #+#             */
/*   Updated: 2023/10/27 00:25:46 by lsampiet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	int		i;

	i = 0;
	substr = (char *) malloc((len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	while (i <= len)
	{
		substr[i] = s[start];
		start++;
		i++;
	}
	substr[len] = '\0';
	return (substr);
}

