/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aottolin <aottolin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:48:10 by aottolin          #+#    #+#             */
/*   Updated: 2024/01/16 15:27:39 by aottolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*					FT_CALLOC:
	Asigna memoria para un número especificado de elementos
	de un tamaño dado, y la inicializa a cero.
	Es útil para asignar y preparar memoria para estructuras
	de datos, como arreglos.
*/

#include "libft.h"

void	*ft_calloc(size_t num_elements, size_t size)
{
	void	*result;

	result = (void *)malloc(num_elements * size);
	if (!result)
		return (0);
	else
		ft_bzero(result, num_elements * size);
	return (result);
}
/*
int main(void)
{
	ft_calloc(5, sizeof(int));
	return (0);
}*/
