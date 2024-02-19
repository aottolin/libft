/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aottolin <aottolin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:52:01 by aottolin          #+#    #+#             */
/*   Updated: 2024/01/16 11:52:02 by aottolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**************************************************************	
*						FT_STRLEN:							  *
*	La función ft_strlen calcula la longitud de una cadena de *
*	caracteres (str), es decir, el número de caracteres hasta *
*	el carácter nulo de terminación ('\0').                   *
*															  *	
*	Argumentos:												  *
*	str: La cadena de caracteres cuya longitud se calculará.  *
*															  *
\*************************************************************/

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	x;

	x = 0;
	while (str[x])
		x++;
	return (x);
}
/*
int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("cantidad de caracteres: %zu\n", ft_strlen(argv[1]));
		printf("strlen original... %lu\n", strlen(argv[1]));
	}
	else
		printf("error en el paso de argc\n");
	return (0);
}
*/
