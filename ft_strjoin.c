/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aottolin <aottolin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:51:34 by aottolin          #+#    #+#             */
/*   Updated: 2024/01/16 11:59:15 by aottolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/********     Reserva (con malloc(3)) y devuelve una nueva
*********     string, formada por la concatenación de ’s1’ y
*********     ’s2’.
					Parámetros: s1: La primera string.
					s2: La string a añadir a ’s1’.
				Valor devuelto: La nueva string.
********              NULL si falla la reserva de memoria.
*/

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*s3;
	size_t	x;
	size_t	i;

	s3 = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)) + 1 * sizeof(char));
	if (!s3)
		return (NULL);
	i = 0;
	x = 0;
	while (s1[x] != '\0')
	{
		s3[x] = s1[x];
		x++;
	}
	while (s2[i] != '\0')
		s3[x++] = s2[i++];
	s3[x] = '\0';
	return (s3);
}
/*
int	main(void)
{
	char	*string1 = "Alexis thomas";
	char	*string2 = " Ottolini";

	char *string3 = ft_strjoin(string1, string2);
	printf("string1:%s\nstring2:%s\nstring3:%s\n", string1, string2, string3);
	free (string3);
	return (0);
}*/
