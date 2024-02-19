/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aottolin <aottolin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:50:24 by aottolin          #+#    #+#             */
/*   Updated: 2024/01/16 11:57:41 by aottolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**************************************************************	
*						FT_PUTCHAR_FD:						  *
*	La función ft_putchar_fd escribe un carácter (c) en el    * 
*	descriptor de archivo especificado (fd).				  *	
*															  *	
*	Argumentos:												  *
*	c: El carácter que se escribirá en el descriptor de       *
*	archivo.												  *
*	fd: El descriptor de archivo donde se escribirá el        *
*	carácter.												  *
*															  *
\*************************************************************/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
/*
int	main(void)
{
	int fd = open("caracter.txt", O_WRONLY | O_CREAT | O_TRUNC, 0666);

	if (fd == -1)
		return (printf("error al abrir el archivo"));

	ft_putchar_fd('a', fd);
	close (fd);
	return (0);
}*/
