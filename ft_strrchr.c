/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aottolin <aottolin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:52:33 by aottolin          #+#    #+#             */
/*   Updated: 2024/01/16 11:52:35 by aottolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**************************************************************	
*						FT_STRRCHR:							  *
*	La función ft_strrchr busca la última aparición de un     *
*	carácter (c) en una cadena de caracteres (s). Devuelve    *
*	un puntero al carácter encontrado o NULL si no se         *
*	encuentra.                                                *
*															  *	
*	Argumentos:												  *
*	s: La cadena de caracteres en la que se buscará el        *
*	carácter.												  *
*	c: El carácter que se buscará en la cadena.               *
*															  *
\*************************************************************/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	c1;

	c1 = (char)c;
	str = NULL;
	while (*s != '\0')
	{
		if (*s == c1)
			str = (char *)s;
		s++;
	}
	if (*s == c1)
		str = (char *)s;
	return (str);
}
/*
int	main(void)
{
	char string[] = "Hola";
	
	printf("devuelve..%s\n", ft_strrchr(string, 'o'));
	return (0);
}*/
