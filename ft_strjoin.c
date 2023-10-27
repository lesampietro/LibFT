/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsampiet <lsampiet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 23:45:58 by lsampiet          #+#    #+#             */
/*   Updated: 2023/10/27 00:25:54 by lsampiet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		size;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	size = (ft_strlen(s1) + ft_strlen(s2));
	s3 = (char *) malloc ((size + 1) * sizeof(char));
	if (!s3)
		return (NULL);
	while (s1)
	{
		s3[k] = s1[i];
		i++;
	}
	while (s2)
	{
		s3[k] = s2[j];
		j++;
	}
	return (s3);
}


	// while (s1[i] != '\0')
	// 	i++;
	// while (s2[j] != '\0')
	// 	j++;
	// size = i + j;
