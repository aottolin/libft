/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aottolin <aottolin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:51:19 by aottolin          #+#    #+#             */
/*   Updated: 2024/01/16 11:58:05 by aottolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**************************************************************	
*						FT_STRDUP:							  *
*	La función ft_strdup duplica una cadena de caracteres     *
*	(str) en una nueva cadena de caracteres.                  *
*	Devuelve un puntero a la nueva cadena duplicada o NULL    *
*	en caso de error de asignación de memoria.                *	
*															  *	
*	Argumentos:												  *
*	str: La cadena de caracteres que se duplicará.            *
*															  *
\*************************************************************/

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copia;

	copia = (char *)malloc(ft_strlen(s1) + 1);
	if (!copia)
		return (0);
	else
		ft_memcpy(copia, s1, ft_strlen(s1) + 1);
	return (copia);
}
/*
int	main(int argc, char **argv)
{
	char	*string1;

	string1 = argv[1];
	if (argc == 2)
		printf("devuelve..%s\n", ft_strdup(string1));
	return (0);
}*/
