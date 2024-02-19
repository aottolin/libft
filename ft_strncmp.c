/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aottolin <aottolin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:52:16 by aottolin          #+#    #+#             */
/*   Updated: 2024/01/16 11:52:17 by aottolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/***************************************************************	
*						FT_STRNCMP:							   *
*	La función ft_strncmp compara los primeros n caracteres    *
*	de dos cadenas de caracteres (s1 y s2). Devuelve un valor  *
*	entero menor que, igual a, o mayor que cero según si s1    *
*	es menor que, igual a, o mayor que s2, respectivamente.    *
*															   *	
*	Argumentos:												   *
*	s1: La primera cadena de caracteres que se comparará.      *
*	s2: La segunda cadena de caracteres que se comparará.      *
*	n: El número de caracteres a comparar.                     *
*															   *
\**************************************************************/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char string1[] = "hola como estas";
	char string2[] = "";
	
	printf("devuelve..%d\n", ft_strncmp(string1, string2, 11));
	return (0);
}*/
