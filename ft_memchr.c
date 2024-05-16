/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertfe <albertfe@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 15:12:21 by albertfe          #+#    #+#             */
/*   Updated: 2024/04/15 18:19:23 by albertfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	char			*a;
	char			ch;

	ch = c;
	a = (char *)s;
	i = 0;
	while (i < n)
	{
		if (a[i] == ch)
			return (&a[i]);
		i++;
	}
	return (NULL);
}
