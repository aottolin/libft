/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aottolin <aottolin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:52:09 by aottolin          #+#    #+#             */
/*   Updated: 2024/01/16 11:59:53 by aottolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**************************************************************	
*						FT_STRMAPI:							  *
*	La función ft_strmapi aplica una función (f) a cada       *
*	carácter de una cadena de caracteres (s) y crea una       *
*	nueva cadena con los resultados. Devuelve un puntero a    *
*	la nueva cadena o NULL en caso de error de asignación     *
*	de memoria.                                               *
*															  *	
*	Argumentos:												  *
*	s: La cadena de caracteres en la que se aplicará la       *
*	función.												  *
*	f: La función que se aplicará a cada carácter, tomando    *
*	la posición del carácter como primer argumento y el       *
*	carácter como segundo argumento.                          *
*															  *
\*************************************************************/

char	*ft_strmapi(const char *s, char (*f) (unsigned int, char))
{
	char	*str;
	int		i;

	if (!s || !f)
		return (NULL);
	str = (char *)malloc(ft_strlen(s) + 1 * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		++i;
	}
	str[i] = '\0';
	return (str);
}
/*
char to_mayus(unsigned int posicion, char c)
{

	posicion = 32;
	if (c >= 'a' && c <= 'z')
		return (c - posicion);
	else
		return (c);
}

int	main(void)
{
	char string[] = "hola 42, Soy alex!";
	
	char *result = ft_strmapi(string, to_mayus);

	printf("result: %s\n", result);
	free (result);
	return (0);
}*/
