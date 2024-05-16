/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertfe <albertfe@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 14:15:38 by albertfe          #+#    #+#             */
/*   Updated: 2024/04/16 14:31:49 by albertfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		s1len;
	int		s2len;
	char	*js;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	js = malloc(((s1len + s2len) + 1) * sizeof(char));
	if (js == NULL)
		return (NULL);
	ft_memcpy(js, s1, s1len);
	ft_memcpy((void *)&js[s1len], s2, s2len);
	ft_memset((void *)&js[s1len + s2len], '\0', 1);
	return (js);
}
