/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aottolin <aottolin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:49:46 by aottolin          #+#    #+#             */
/*   Updated: 2024/01/16 11:56:06 by aottolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**************************************************************	
*						FT_MEMCHR:							  *
*	La función ft_memchr busca la primera aparición de un     *
*	caracter (representado como un valor de tipo int) en      *
*	un bloque de memoria (representado por el puntero s)      *
*	de tamaño n. Si encuentra el carácter, devuelve un        *
*	puntero al lugar en la memoria donde lo encontró; si      *
*	no lo encuentra, devuelve un puntero nulo (NULL).         *
*															  *	
*	Argumentos:												  *
*	s: Un puntero a un bloque de memoria donde se realizará   *
*	la búsqueda.											  *
*	c: El valor de tipo int que se busca en el bloque de      *
*	memoria.												  *
*	n: El número de bytes en el bloque de memoria que se      *
*	analizará.											      *
*															  *
\*************************************************************/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s1;
	unsigned char	c1;
	size_t			i;

	s1 = (unsigned char *)s;
	c1 = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (s1[i] == c1)
			return (s1 + i);
		else
			i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	string[] = "asdasdas 123123 firpq";	
	
	printf("devuelve..%s\n", (char *)ft_memchr(string, 'z', 0));
	return (0);
}*/
