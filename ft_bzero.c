/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aottolin <aottolin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:47:58 by aottolin          #+#    #+#             */
/*   Updated: 2024/01/16 11:48:01 by aottolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*						FT_BZERO:
*	Establece todos los bytes de un bloque de memoria a cero.
*	Es útil para inicializar o "borrar" la memoria de manera eficiente.
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*s1;
	unsigned char	x;

	x = '\0';
	s1 = (unsigned char *)s;
	while (n--)
		*s1++ = x;
}
/*
int	main(void)
{
	char string[10];

	bzero(string, 10);
	printf("devuelve...%s\n", string);
	return (0);
}
*/
