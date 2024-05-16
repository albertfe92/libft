/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertfe <albertfe@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:07:01 by albertfe          #+#    #+#             */
/*   Updated: 2024/04/15 19:13:37 by albertfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	i2;
	unsigned int	i3;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && len > i)
	{
		i2 = 0;
		i3 = 0;
		while (needle[i2] != '\0')
		{
			i2++;
			if (i3 != i2 && haystack[i + (i2 - 1)] == needle[i2 - 1])
				i3++;
			else
				break ;
		}
		if (i3 == i2 && i3 <= (len - i))
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
