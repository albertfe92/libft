/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertfe <albertfe@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 16:06:46 by albertfe          #+#    #+#             */
/*   Updated: 2024/04/17 13:36:40 by albertfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	unsigned int	len;
	char			*cpy;

	len = ft_strlen(s1) + 1;
	cpy = malloc(len);
	if (cpy == NULL)
		return (NULL);
	ft_memcpy (cpy, s1, len);
	return (cpy);
}
