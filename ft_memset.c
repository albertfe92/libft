/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertfe <albertfe@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:20:39 by albertfe          #+#    #+#             */
/*   Updated: 2024/04/14 16:53:20 by albertfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	i;
	char			*a;

	a = (char *)b;
	i = 0;
	while (i < len)
	{
		a[i] = c;
		i++;
	}
	return (a);
}

//rellena un numero de bytes de un string con un caracter//
