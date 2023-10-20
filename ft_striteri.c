/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsampiet <lsampiet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 05:10:39 by lsampiet          #+#    #+#             */
/*   Updated: 2023/10/20 05:24:12 by lsampiet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

//Example: BANANA
//The letter "B" in "BANANA" is equal to s[0] or
//	to s[i] (before incrementing).
//In this function, we want the string's character 
//	adress to be passed as argument.
//That's why we use "&s[i]".