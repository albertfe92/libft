/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertfe <albertfe@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 17:16:37 by albertfe          #+#    #+#             */
/*   Updated: 2024/04/14 16:25:09 by albertfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	i2;
	unsigned int	lensrc;
	unsigned int	lendst;

	lensrc = ft_strlen(src);
	i = ft_strlen(dst);
	lendst = i;
	i2 = 0;
	if (dstsize <= lendst || dstsize == 0)
		return (lensrc + dstsize);
	while (src[i2] != '\0' && i2 < dstsize - lendst - 1)
	{
		dst[i] = src[i2];
		i++;
		i2++;
	}
	dst[i] = '\0';
	return (lendst + lensrc);
}
//concatena un string a otro string mientras el tamaño dado sea suficiente//
