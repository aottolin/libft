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

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
void	is_mayus(void *content)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)content;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -=32;
		}
		write (1, &str[i], 1);
		i++;
	}
}

int	main(void)
{
	t_list	*ato;
	t_list	*copiaato;
	char	*contenido1;
	char	*contenido2;
	char	*contenido3;

	contenido1 = ft_strdup("MAyus");
	contenido2 = ft_strdup("17alexis");
	contenido3 = ft_strdup("nohaymayusculas");

	ato = ft_lstnew(contenido1);
	ato->next = ft_lstnew(contenido2);
	ato->next->next = ft_lstnew(contenido3);
	
	copiaato = ato;
	while (ato)
	{
printf("ato antes de aplicarle la funcion f: %s\n", (char *)ato->content);
		ato = ato->next;
	}
	ft_lstiter(copiaato, is_mayus);
	free(ato);
	free(copiaato);
	return (0);
}*/
