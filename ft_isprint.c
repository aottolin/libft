/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aottolin <aottolin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:49:07 by aottolin          #+#    #+#             */
/*   Updated: 2024/01/16 11:49:12 by aottolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**************************************************************	
*						FT_ISPRINT:							  *
*	La función ft_isprint se utiliza para determinar si      *
*	un valor de tipo int representa un carácter imprimible   *
*	de acuerdo con la tabla ASCII extendida (códigos de      *
*	carácter de 32 a 126). Devuelve 1 si el valor es un     *
*	carácter imprimible y 0 si no lo es.				      *
*															  *	
*	Argumentos:												  *
*	c: Un valor de tipo int que representa un carácter o	  *
*	código de carácter ASCII.								  *
*															  *
\*************************************************************/

#include "libft.h"

int	ft_isprint(int ch)
{
	if (ch >= 32 && ch <= 126)
		return (1);
	return (0);
}
