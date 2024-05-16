/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertfe <albertfe@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 14:35:18 by albertfe          #+#    #+#             */
/*   Updated: 2024/04/16 16:33:42 by albertfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int				str;
	int				end;
	char			*ts;

	if (s1 == 0 || set == 0)
		return (NULL);
	str = 0;
	end = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[str]) && str <= end)
		str++;
	if (str > end)
		return (ft_strdup(s1 + end + 1));
	while (ft_strchr(set, s1[end]) && end >= 0)
		end--;
	ts = malloc(end - str + 2);
	if (ts == NULL)
		return (NULL);
	ft_strlcpy(ts, &s1[str], end - str + 2);
	return (ts);
}
