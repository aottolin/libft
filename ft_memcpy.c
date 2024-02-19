/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aottolin <aottolin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:50:00 by aottolin          #+#    #+#             */
/*   Updated: 2024/01/16 11:56:17 by aottolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**************************************************************	
*						FT_MEMCPY:							  *
*	La función ft_memcpy copia n bytes de una zona de memoria *
*	origen (src) a una zona de memoria destino (dest).        *
*	Devuelve un puntero a la zona de memoria destino.         *	
*															  *	
*	Argumentos:												  *
*	dest: Un puntero a la zona de memoria destino donde se    *
*	realizará la copia.										  *
*	src: Un puntero a la zona de memoria origen desde donde   *
*	se copiarán los datos.									  *
*	n: El número de bytes que se copiarán desde src a dest.   *
*															  *
\*************************************************************/

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t nbytes)
{
	if (!dest && !src && nbytes > 0)
		return (NULL);
	return (ft_memmove(dest, src, nbytes));
}
/*
int	main(void)
{
	char destino[20];
	char base[] = "hola loco!";
	printf("original..%s\n", (char *)ft_memcpy(destino, base, 4));
	return (0);
}*/
