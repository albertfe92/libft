/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertfe <albertfe@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 17:27:22 by albertfe          #+#    #+#             */
/*   Updated: 2024/04/22 18:17:49 by albertfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = n * -1;
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		c = '0' + (n % 10);
		ft_putchar_fd(c, fd);
	}
	else if (n >= 0)
	{
		c = '0' + (n % 10);
		ft_putchar_fd(c, fd);
	}
}
