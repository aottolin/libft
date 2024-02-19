/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aottolin <aottolin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:50:49 by aottolin          #+#    #+#             */
/*   Updated: 2024/01/16 11:50:50 by aottolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write (fd, &s[i], 1);
		i++;
	}
}
/*
int	main(void)
{
	int fd = open("string.txt", O_WRONLY | O_CREAT, 0666);
	if (fd == -1)
		return (printf("error al crear FD"));

	char *string = "Hola! como estas? Soy alex!";

	ft_putstr_fd(string, fd);
	close (fd);
	return (0);
}*/
