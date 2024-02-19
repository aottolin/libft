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

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*tmp;
	void	*cont;

	if (!lst || !f || !del)
		return (NULL);
	new = NULL;
	while (lst)
	{
		cont = f(lst->content);
		tmp = ft_lstnew(cont);
		if (!tmp)
		{
			del(cont);
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, tmp);
		lst = lst->next;
	}
	return (new);
}
/*
void	*is_mayus(void *content)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)content;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return ((void *)str);
}

void	delete(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*ato;
	t_list	*copia;
	char	*contenido1;
	char	*contenido2;
	char	*contenido3;

	contenido1 = ft_strdup("nodo1");
	contenido2 = ft_strdup("nodo2");
	contenido3 = ft_strdup("nodo3");

	ato = ft_lstnew(contenido1);
	ato->next = ft_lstnew(contenido2);
	ato->next->next = ft_lstnew(contenido3);
	copia = ato;

	while (copia)
	{
		printf("ato pre funciones: %s\n", (char *)copia->content);
		copia = copia->next;
	}
	ft_lstmap(ato, is_mayus, delete);

	while (ato)
	{
		 printf("ato post funciones: %s\n", (char *)ato->content);
		 ato = ato->next;
	}
	return (0);
}*/
