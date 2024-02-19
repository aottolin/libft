/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aottolin <aottolin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:51:51 by aottolin          #+#    #+#             */
/*   Updated: 2024/01/16 11:51:53 by aottolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/***************************************************************	
*						FT_STRLCPY:							   *
*	La función ft_strlcpy copia una cadena de origen (src) en  *
*	una cadena de destino (dst) con un límite de tamaño        *
*	especificado (size). Devuelve la longitud de la cadena     *
*	de origen (src) que intentó copiar.                        *
*															   *	
*	Argumentos:												   *
*	dst: La cadena de destino donde se copiará src.            *
*	src: La cadena de origen que se copiará en dst.            *
*	size: El tamaño máximo de dst, incluyendo el carácter      *
*	nulo de terminación.                                       *
*															   *
\**************************************************************/

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *str, size_t size)
{
	unsigned int	i;

	i = 0;
	if (size != 0)
	{
		while (str[i] && i < size - 1)
		{
			dst[i] = str[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(str));
}
/*
int	main(void)
{
	char destino[20];
	char base[] = "holac";
		
	printf("devuelve: %zu\n",ft_strlcpy(destino, base, 4));
	return (0);
}*/
