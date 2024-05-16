/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertfe <albertfe@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:35:30 by albertfe          #+#    #+#             */
/*   Updated: 2024/04/17 15:33:33 by albertfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digits(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int				i;
	char			*numstr;
	long int		res;

	res = n;
	i = digits(n);
	if (n < 0)
	{
		res = res * -1;
		i++;
	}
	numstr = malloc((i + 1) * sizeof(char));
	if (numstr == NULL)
		return (NULL);
	numstr[i] = 0;
	while (i > 0)
	{
		numstr[i - 1] = (res % 10) + '0';
		res = res / 10;
		i--;
	}
	if (n < 0)
		numstr[0] = '-';
	return (numstr);
}
