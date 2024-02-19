/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aottolin <aottolin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:48:27 by aottolin          #+#    #+#             */
/*   Updated: 2024/01/16 11:48:30 by aottolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*						FT_ISALNUM:
 * Determina si un carácter es alfanumérico, es decir,
 * si es una letra (mayúscula o minúscula) o un dígito,
 * y devuelve 1 si es alfanumérico y 0 si no lo es.
*/

#include <ctype.h>

int	ft_isalnum(int ch)
{
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')
		|| (ch >= '0' && ch <= '9'))
		return (1);
	return (0);
}

/*
int main(void)
{
	printf("devuelve.. %d\n", ft_isalnum('2'));
	printf("devuelve la original.. %d\n", isalnum('2'));
	return (0);
}*/
