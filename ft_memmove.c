/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aottolin <aottolin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:50:10 by aottolin          #+#    #+#             */
/*   Updated: 2024/01/16 11:56:32 by aottolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**************************************************************	
*						FT_MEMMOVE:							  *
*	La función ft_memmove copia len bytes de una zona de      *
*	memoria origen (src) a una zona de memoria destino (dst), *
*	posiblemente solapándose. Devuelve un puntero a la zona   *
*	de memoria destino.                                       *	
*															  *	
*	Argumentos:												  *
*	dst: Un puntero a la zona de memoria destino donde se     *
*	realizará la copia.										  *
*	src: Un puntero a la zona de memoria origen desde donde   *
*	se copiarán los datos.									  *
*	len: El número de bytes que se copiarán desde src a dst.  *
*															  *
\*************************************************************/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*src1;
	char	*dst1;
	size_t	i;

	i = len;
	src1 = (char *)src;
	dst1 = (char *)dst;
	if (src1 == dst1)
		return (dst1);
	if (src1 < dst1)
	{
		while (i-- > 0)
			dst1[i] = src1[i];
	}
	else
	{
		i = -1;
		while (++i < len)
			dst1[i] = src1[i];
	}
	return (dst1);
}
/*
int	main(void)
{
	char base[] = "hola, loco!";
	char destino[20];

	printf("devuelve... %s\n", (char *)ft_memmove(destino, base, 13));

	return (0);
}
*/
