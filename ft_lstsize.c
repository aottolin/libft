/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aottolin <aottolin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 10:32:21 by aottolin          #+#    #+#             */
/*   Updated: 2024/01/17 11:40:23 by aottolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*rr;
	int		i;

	if (!lst)
		return (0);
	rr = lst;
	i = 0;
	while (rr)
	{
		rr = rr->next;
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	t_list	*ato;

	ato = ft_lstnew("alex");
	ato->next = ft_lstnew("Thomas");
	ato->next->next = ft_lstnew("Ottolini");
	ato->next->next->next = ft_lstnew("Ot");	
	ato->next->next->next->next = ft_lstnew("Ottolasdasdasdini");
	
	ft_lstsize(ato);
	free(ato);
	return (0);
}*/
