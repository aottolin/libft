/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aottolin <aottolin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:52:52 by aottolin          #+#    #+#             */
/*   Updated: 2024/01/16 12:00:08 by aottolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*** Reserva (con malloc(3)) y devuelve una substring de
*****la string ’s’.
*****La substring empieza desde el índice ’start’ y
*****tiene una longitud máxima ’len’. 

*****Valor devuelto: La substring resultante.
*****NULL si falla la reserva de memoria
***** Parámetros: s: La string desde la que crear la substring.
start: El índice del caracter en ’s’ desde el que
empezar la substring.
len: La longitud máxima de la substring **********************/

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*sub;

	if (!s)
		return (NULL);
	if (ft_strlen(s) <= start)
		return (ft_strdup("\0"));
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	sub = (char *)malloc(len + 1 * sizeof(char));
	if (!sub)
		return (NULL);
	else
		ft_strlcpy(sub, s + start, len + 1);
	return (sub);
}
/*
int	main(void)
{
	char string[] = "hola";
	unsigned int inicio = 6;
	size_t longitud = 2;
	char *result = ft_substr(string, inicio, longitud);
	printf("Cadena: %s\nStart: %d\nLen: %ld\n", string, inicio, longitud);
	printf("Resultado ft_substr: \"%s\"\n", result);

	free (result);
	return (0);
}*/
