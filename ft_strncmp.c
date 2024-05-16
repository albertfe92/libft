/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertfe <albertfe@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 14:50:59 by albertfe          #+#    #+#             */
/*   Updated: 2024/04/15 15:18:40 by albertfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*a;
	unsigned char	*b;

	i = 0;
	if (n == 0)
		return (0);
	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	while (a[i] != '\0' && i < n - 1 && a[i] == b[i])
		i++;
	return (a[i] - b[i]);
}
