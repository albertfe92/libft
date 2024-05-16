/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertfe <albertfe@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:22:43 by albertfe          #+#    #+#             */
/*   Updated: 2024/04/14 17:20:45 by albertfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*biggerfrom(char *t, char *f, size_t l, unsigned int i2)
{
	while (i2 < l)
	{
		t[i2] = f[i2];
		i2++;
	}
	return (t);
}

static char	*biggerto(char *t2, char *f2, size_t l2, int i3)
{
	i3 = (int)l2 - 1;
	while (i3 >= 0)
	{
		t2[i3] = f2[i3];
		i3--;
	}
	return (t2);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int	i;
	char			*to;
	char			*from;

	to = (char *)dst;
	from = (char *)src;
	if (from == to || len == 0)
		return (dst);
	i = 0;
	if (to > from && (to - from) < (int)len)
		return (biggerto(to, from, len, (int)i));
	if (from > to && (from - to) < (int)len)
		return (biggerfrom(to, from, len, i));
	ft_memcpy(dst, src, len);
	return (dst);
}
	/*copia un numero de bytes de un string a otro, 
	pueden compartir espacio; la copia se realizara 
	de forma no destructiva*/
