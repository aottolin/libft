/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aottolin <aottolin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:51:43 by aottolin          #+#    #+#             */
/*   Updated: 2024/01/16 11:59:38 by aottolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/***************************************************************	
*						FT_STRLCAT:							   *
*	La función ft_strlcat concatena dos cadenas de caracteres  *
*	(src y dest) en la cadena de destino (dest) con un límite  *
*	de tamaño especificado (size). Devuelve la longitud total  *
*	de la cadena resultante después de la concatenación.       *
*															   *	
*	Argumentos:												   *
*	dest: La cadena de destino donde se concatenará src.       *
*	src: La cadena de origen que se concatenará en dest.       *
*	size: El tamaño máximo de dest, incluyendo el carácter     *
*	nulo de terminación.                                       *
*															   *
\**************************************************************/

#include "libft.h"

unsigned int	ft_strlcat(char *dst, char *str, unsigned int size)
{
	unsigned int	i;
	unsigned int	x;
	unsigned int	destlen;
	unsigned int	srclen;

	i = 0;
	x = ft_strlen(dst);
	destlen = ft_strlen(dst);
	srclen = ft_strlen(str);
	while (str[i] != '\0' && x < size - 1 && size > 0)
	{
		dst[x] = str[i];
		i++;
		x++;
	}
	dst[x] = '\0';
	if (destlen > size)
		destlen = size;
	return (destlen + srclen);
}
/*
int	main(void)
{
	char destino[40] = "holaholachau";
	char base[] = "Hola";

	printf("strlcat..%u\n", ft_strlcat(destino, base, 4));
	printf("cadena destino: %s\n", destino);
	return (0);
}*/
