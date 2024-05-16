/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertfe <albertfe@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:50:05 by albertfe          #+#    #+#             */
/*   Updated: 2024/04/08 20:11:45 by albertfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	unsigned int	i;
	int				num;
	int				neg;

	i = 0;
	num = 0;
	neg = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		neg = 44 - str[i];
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (str[i] - 48) + (num * 10);
		i++;
	}
	return (num * neg);
}
