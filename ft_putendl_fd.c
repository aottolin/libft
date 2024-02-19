/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aottolin <aottolin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:50:32 by aottolin          #+#    #+#             */
/*   Updated: 2024/01/16 11:50:35 by aottolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
	write (fd, "\n", 1);
}
/*
int	main(void)
{
	char *string = "hola como estas";

	int fd = open("stringsalto.txt", O_WRONLY | O_CREAT, 0666);
	
	if (fd == -1)
		return (1);
	ft_putendl_fd(string, fd);
	close (fd);
	return (0);
}*/
