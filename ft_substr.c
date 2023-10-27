/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsampiet <lsampiet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 23:45:36 by lsampiet          #+#    #+#             */
/*   Updated: 2023/10/27 02:02:27 by lsampiet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	int		i;
	int		txt_size;

	i = 0;
	txt_size = ft_strlen(s);
	if (start > txt_size)
		return (ft_strdup(""));
	if ((txt_size - start) < len)
		len = (txt_size - start);
			substr = (char *)malloc((len + 1) * sizeof(char));
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
