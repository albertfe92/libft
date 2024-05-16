/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertfe <albertfe@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:38:39 by albertfe          #+#    #+#             */
/*   Updated: 2024/04/15 18:03:42 by albertfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	unsigned char	*buff;
	char			ch;

	i = 0;
	ch = c;
	buff = (unsigned char *)s;
	while (s[i] != '\0')
	{
		if (s[i] == ch)
			buff = (unsigned char *)&s[i];
		i++;
	}
	if (s[i] == '\0' && ch == '\0')
		return ((char *)&s[i]);
	if (buff[0] == ch)
		return ((char *)&buff[0]);
	return (NULL);
}
