/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aottolin <aottolin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:48:56 by aottolin          #+#    #+#             */
/*   Updated: 2024/01/16 11:48:58 by aottolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**************************************************************	
*						FT_ISDIGIT:							  *
*	La función ft_isdigit se utiliza para determinar si       *
*	un carácter representa un dígito decimal. Devuelve 1      *
*	si el carácter es un dígito (0-9) y 0 si no lo es.		  *
*															  *	
*	Argumentos:												  *
*	c: Un valor de tipo int que representa un carácter.		  *
*															  *
\*************************************************************/

#include "libft.h"

int	ft_isdigit(int ch)
{
	if (ch >= '0' && ch <= '9')
		return (1);
	return (0);
}
/*
int main(void)
{
	printf("devuelve.. %d\n", ft_isdigit('a'));
	printf("devuelve la original.. %d\n", isdigit('a'));
	return (0);
}
*/
