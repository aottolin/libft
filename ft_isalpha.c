/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aottolin <aottolin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:48:36 by aottolin          #+#    #+#             */
/*   Updated: 2024/01/16 11:48:38 by aottolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**********************************************************	
*						 FT_ISALPHA:					  *
*	La función ft_isalpha se utiliza para determinar	  *
*	si un carácter es una letra del alfabeto. Devuelve 1  *
*	si el carácter es una letra (mayúscula o minúscula)   *
*	y 0 si no lo es.									  *	
*														  *	
*	Argumentos:											  *
*	c: Un valor de tipo int que representa un carácter,	  *
*	generalmente en forma de su valor ASCII.			  * 
*														  *
\*********************************************************/

#include "libft.h"

int	ft_isalpha(int ch)
{
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
		return (1);
	return (0);
}
/*
int main(void)
{
	printf("devuelve.. %d\n", ft_isalpha('A'));
	printf("devuelve la original.. %d\n", isalpha('A'));
	return (0);
}*/
