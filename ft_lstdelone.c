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

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	else
	{
		del(lst->content);
		free(lst);
	}
}
/*
void	ft_lib(void *content)
{
	free(content);
}

int	main(void)
{
	char *contenido = strdup("contenido que hay dentro del nodo, es un string");
	t_list	*ato;

	ato = ft_lstnew(contenido);
	printf("ato antes de eliminar: %s\n", (char *)ato->content);	
	
	ft_lstdelone(ato, ft_lib);
	return (0);
}*/
