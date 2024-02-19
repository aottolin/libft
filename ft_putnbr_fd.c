/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aottolin <aottolin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:50:42 by aottolin          #+#    #+#             */
/*   Updated: 2024/01/16 11:50:43 by aottolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write (fd, "-", 1);
		write (fd, "2", 1);
		n = 147483648;
	}
	if (n < 0)
	{
		write (fd, "-", 1);
		n *= -1;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
	{
		n = n + '0';
		write (fd, &n, 1);
	}
}
/*
int	main(void)
{
	int	fd = open("putnbr.txt", O_WRONLY | O_CREAT, 0666);
	
	if (fd == -1)
		return (1);
	ft_putnbr_fd(28778780, fd);
	close (fd);
	return (0);
}*/
