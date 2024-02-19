/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aottolin <aottolin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:49:53 by aottolin          #+#    #+#             */
/*   Updated: 2024/01/16 11:49:54 by aottolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**************************************************************	
*						FT_MEMCMP:							  *
*	La función ft_memcmp compara los primeros n bytes de dos  *
*	bloques de memoria (s1 y s2). Devuelve un valor menor,    *
*	mayor o igual a cero según si s1 es menor, mayor o igual  *
*	que s2.													  *	
*															  *	
*	Argumentos:												  *
*	s1: Un puntero al primer bloque de memoria a comparar.    *
*	s2: Un puntero al segundo bloque de memoria a comparar.   *
*	n: El número de bytes que se compararán entre los dos     *
*	bloques de memoria.									      *
*															  *
\*************************************************************/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	unsigned int	i;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char string1[] = "Hola como estas! tu puta madre...";
	char string2[] = "Hola como estas! tu puta madre...";

	printf("devuelve..%d\n", ft_memcmp(string1, string2, 34));

	return (0);
}*/
