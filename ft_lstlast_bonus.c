/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsampiet <lsampiet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 21:57:01 by lsampiet          #+#    #+#             */
/*   Updated: 2023/11/17 13:48:25 by lsampiet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
			lst = lst->next;
	return (lst);
}

// lst->next != NULL
// necessário percorrer usando -> para se referir ao ponteiro 
// não dá só pra contar a ocorrência de nodes mas sim checar 
// se o ponteiro que aponta p/ o endereço do próximo node
// é o ponteiro NULL.

// lst = lst->next;
// temos que atribuir o endereço do próximo node
// no nosso *lst, conforme o loop roda. 