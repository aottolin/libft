/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aottolin <aottolin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:47:40 by aottolin          #+#    #+#             */
/*   Updated: 2024/01/16 11:47:44 by aottolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*						FT_ATOI: 
 Convierte una cadena de caracteres en un número entero,
 teniendo en cuenta los signos (+/-) y los dígitos numéricos en la cadena.
*/

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	signo;
	int	resultado;

	i = 0;
	signo = 1;
	resultado = 0;
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			signo = -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		resultado = resultado * 10 + str[i] - '0';
		i++;
	}
	return (resultado * signo);
}
/*
int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("atoi original----> %d\n", atoi(argv[1]));
		printf("mi propia atoi---> %d\n", ft_atoi(argv[1]));
	}
	else
		write(1, "pase argc correctos\n", 20);
	return (0);
}*/
