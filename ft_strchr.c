/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aottolin <aottolin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:51:05 by aottolin          #+#    #+#             */
/*   Updated: 2024/01/16 11:51:12 by aottolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**************************************************************	
*						FT_STRCHR:							  *
*	La función ft_strchr busca la primera aparición de un     *
*	carácter (c) en una cadena de caracteres (s).             *
*	Devuelve un puntero al carácter encontrado o NULL si el   *
*	carácter no se encuentra en la cadena.                    *	
*															  *	
*	Argumentos:												  *
*	s: La cadena de caracteres en la que se realizará la      *
*	búsqueda.												  *
*	c: El carácter que se buscará en la cadena.               *
*															  *
\*************************************************************/

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	c1;

	c1 = (char )c;
	i = 0;
	while (s[i] != '\0' && c1 != s[i])
		i++;
	if (c1 == s[i])
		return ((char *)s + i);
	return (0);
}
/*
int	main(void)
{
	char string[] = "como estas17";

	printf("devuelve...%s\n", ft_strchr(string, 'e'));

	return (0);
}*/
