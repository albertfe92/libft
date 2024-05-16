/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertfe <albertfe@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 12:12:28 by albertfe          #+#    #+#             */
/*   Updated: 2024/04/25 15:44:43 by albertfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ss;

	if (start >= ft_strlen(s) || len == 0)
	{
		ss = malloc(sizeof(char));
		if (ss == NULL)
			return (NULL);
		ss[0] = '\0';
		return (ss);
	}
	else if (ft_strlen(&s[start]) <= len)
		len = ft_strlen(&s[start]);
	ss = malloc((len + 1) * sizeof(char));
	if (ss == NULL)
		return (NULL);
	ft_strlcpy(ss, (char const *)&s[start], len + 1);
	return (ss);
}
