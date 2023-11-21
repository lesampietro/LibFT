/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsampiet <lsampiet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:11:55 by lsampiet          #+#    #+#             */
/*   Updated: 2023/11/13 19:33:33 by lsampiet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(const char *s, char c)
{
	int	words;
	int	is_word;
	int	i;

	words = 0;
	i = 0;
	while (s[i])
	{
		is_word = 0;
		while (s[i] && s[i] != c)
		{
			i++;
			is_word = 1;
		}
		if (is_word == 1)
			words++;
		while (s[i] && s[i] == c)
			i++;
	}
	return (words);
}

void	ft_free_array(char **new)
{
	int	x;

	x = 0;
	while (new[x])
	{
		free (new[x]);
		new[x] = NULL;
		x++;
	}
	free (new);
}

void	ft_make_array(char const *s, char c, char **new)
{
	int	i;
	int	x;
	int	start;

	i = 0;
	x = -1;
	while (s[i])
	{
		while (s[i] && s[i] == (unsigned char)c)
			i++;
		if (s[i] != (unsigned char)c)
			start = i;
		while (s[i] && s[i] != (unsigned char)c)
			i++;
		if (start != i)
			new[++x] = ft_substr(s, start, (i - start));
		if (!new[x])
		{
			ft_free_array(new);
			return ;
		}
	}
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		wrd_count;
	char	**new;

	i = 0;
	wrd_count = ft_count_words(s, c);
	new = (char **) malloc ((wrd_count + 1) * (sizeof(char *)));
	if (!new)
		return (NULL);
	if (!wrd_count)
	{
		new[0] = NULL;
		return (new);
	}
	ft_make_array(s, c, new);
	new[wrd_count] = NULL;
	return (new);
}
