/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aottolin <aottolin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:47:40 by aottolin          #+#    #+#             */
/*   Updated: 2024/01/16 11:47:44 by aottolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	else
	{
		while (*lst)
		{
			tmp = (*lst)->next;
			del((*lst)->content);
			free(*lst);
			(*lst) = tmp;
		}
	}
}
/*
void	ft_delete(void *nodo)
{
	free(nodo);
}

int	main(void)
{
	t_list	*ato;

	ato = ft_lstnew("nodo1");
	ato->next = ft_lstnew("nodo2");
	ato->next->next = ft_lstnew("nodo3");

	while (ato)
	{
		printf("Ato pre eliminacion-> %s\n", (char *)ato->content);
		ato = ato->next;
	}
	ft_lstclear(&ato, ft_delete);
	if (!ato)
		printf("la lista ha sido eliminada y esta vacia\n");
	return (0);
}*/
