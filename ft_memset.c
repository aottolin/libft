/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aottolin <aottolin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:50:16 by aottolin          #+#    #+#             */
/*   Updated: 2024/01/16 11:57:17 by aottolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**************************************************************	
*						FT_MEMSET:							  *
*	La función ft_memset establece los primeros len bytes     *
*	de una zona de memoria (b) con un valor específico (c).   *
*	Devuelve un puntero a la zona de memoria modificada.      *	
*															  *	
*	Argumentos:												  *
*	b: Un puntero a la zona de memoria donde se realizará     *
*	la operación de establecimiento de valores.               *
*	c: El valor que se establecerá en los bytes de memoria.   *
*	len: El número de bytes que se establecerán con el valor  *
*	específico.												  *
*															  *
\*************************************************************/

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*tmp;

	tmp = (unsigned char *)b;
	while (len--)
		*tmp++ = (unsigned char)c;
	return (b);
}
/*
int	main(void)
{
	char array[2];

	char *result = memset(array, 'A', sizeof(array));
	printf("resultado.. %s\n", result);
	return (0);
}
*/
