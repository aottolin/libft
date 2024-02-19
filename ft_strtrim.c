/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aottolin <aottolin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:52:43 by aottolin          #+#    #+#             */
/*   Updated: 2024/01/16 11:52:44 by aottolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/********    Elimina todos los caracteres de la string ’set’
           desde el principio y desde el final de ’s1’, hasta
             encontrar un caracter no perteneciente a ’set’. La
              string resultante se devuelve con una reserva de
              malloc(3)
*********     Parámetros: s1: La string que debe ser recortada.
*********                 set: Los caracteres a eliminar de la string.
			  Valor devuelto:
							La string recortada.
							NULL si falla la reserva de memoria.
 */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*str1;
	size_t	x;

	if (!s1)
		return (NULL);
	if (!set)
		return ((char *)s1);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	x = ft_strlen(s1);
	while (x && ft_strchr(set, s1[x]))
		x--;
	str1 = ft_substr(s1, 0, x + 1);
	if (!str1)
		return (NULL);
	return (str1);
}
/*
int	main(void)
{
	char *string1 = "/////Hola//";
	char *borrar = "/";
	char *result = ft_strtrim(string1, borrar);

	printf("s1:%s\nborrar:%s\nresult:%s\n", string1, borrar, result);

	return (0);
}*/
