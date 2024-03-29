/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aottolin <aottolin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:52:24 by aottolin          #+#    #+#             */
/*   Updated: 2024/01/16 11:52:25 by aottolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/***************************************************************	
*						FT_STRNSTR:							   *
*	La función ft_strnstr busca una subcadena (little) dentro  *
*	de una cadena más grande (big) con un límite de longitud   *
*	especificado (len). Devuelve un puntero al comienzo de     *
*	la primera ocurrencia de little en big dentro del límite   *
*	de longitud, o NULL si no se encuentra.                    *
*															   *	
*	Argumentos:												   *
*	big: La cadena más grande en la que se buscará little.     *
*	little: La subcadena que se buscará en big.                *
*	len: El límite de longitud hasta el cual buscar.           *
*															   *
\**************************************************************/

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	x;

	i = 0;
	if (little[i] == '\0' || !little)
		return ((char *)big);
	while (big[i] && i < len)
	{
		x = 0;
		while (big[i + x] == little[x] && (i + x < len))
		{
			if (!little[x + 1])
				return ((char *)big + i);
			x++;
		}
		i++;
	}
	return (NULL);
}
/*
int	main(int argc, char **argv)
{
	if (argc == 4)
		printf("%s", ft_strnstr(argv[1], argv[2], atoi(argv[3])));
	return (0);
}*/
