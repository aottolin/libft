/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aottolin <aottolin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:48:49 by aottolin          #+#    #+#             */
/*   Updated: 2024/01/16 11:48:51 by aottolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**************************************************************	
*						  FT_ISASCII:						  *
*	La función ft_isascii se utiliza para determinar		  *
*	si un valor de tipo int representa un carácter ASCII      *
*	válido. Devuelve 1 si el valor está en el rango 0-127     *
*	(inclusive), que es el rango de los caracteres ASCII,     *
*	y 0 en caso contrario.									  *	
*															  *	
*	Argumentos:												  *
*	c: Un valor de tipo int que se verifica como carácter	  *
*	ASCII válido.											  * 
*															  *
\*************************************************************/

#include "libft.h"

int	ft_isascii(int ch)
{
	if (ch >= 0 && ch <= 127)
		return (1);
	return (0);
}

/*
int main(void)
{
	printf("devuelve.. %d\n", ft_isascii(128));
	printf("devuelve la original.. %d\n", isascii(128));
	return (0);
}
*/
