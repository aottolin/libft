/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aottolin <aottolin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:51:26 by aottolin          #+#    #+#             */
/*   Updated: 2024/01/16 11:51:28 by aottolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**************************************************************	
*						FT_STRITERI:						  *
*	La función ft_striteri aplica una función (f) a cada      *
*	carácter de una cadena de caracteres (s), pasando la      *
*	posición del carácter como primer argumento.              *
*															  *	
*	Argumentos:												  *
*	s: La cadena de caracteres en la que se aplicará la       *
*	función.												  *
*	f: La función que se aplicará a cada carácter, tomando    *
*	la posición del carácter como primer argumento y el       *
*	puntero al carácter como segundo argumento.               *
*															  *
\*************************************************************/

#include "libft.h"

void	ft_striteri(char *s, void (*f) (unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void	print(unsigned int posic, char *caracter)
{
	printf("posicion: %d, Caracter: %s\n", posic, caracter);
}

int	main(void)
{
	char *string = "Hola! Alex?..bienvenido a 42Barcelona!!";
	
	ft_striteri(string, print);
	return (0);
}*/
