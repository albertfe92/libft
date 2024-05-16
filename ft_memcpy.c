/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertfe <albertfe@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:27:54 by albertfe          #+#    #+#             */
/*   Updated: 2024/04/17 17:07:04 by albertfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	i;
	char			*a;
	char			*b;

	a = (char *)dst;
	b = (char *)src;
	if (a == NULL && b == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
	return (dst);
}
