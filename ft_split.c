/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertfe <albertfe@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:54:16 by albertfe          #+#    #+#             */
/*   Updated: 2024/04/22 19:04:11 by albertfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	wordcnt(char const *str, char ch)
{
	unsigned int	cnt;
	unsigned int	flag;
	unsigned int	i;

	i = 0;
	flag = 0;
	cnt = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ch && flag == 0)
		{
			cnt++;
			flag = 1;
		}
		else if (str[i] == ch)
			flag = 0;
		i++;
	}
	return (cnt);
}

static void	*ft_freemem(char **array, unsigned int cnt)
{
	unsigned int	i;

	i = 0;
	while (i < cnt)
	{
		free(array[i]);
		i++;
	}
	free(array);
	return (NULL);
}

static char	**str_creation(char const *s, char c, char **ind)
{
	unsigned int	i;
	unsigned int	j;
	int				strit;

	i = 0;
	j = 0;
	strit = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && strit == -1)
			strit = i;
		else if ((s[i] == c || i == ft_strlen(s)) && strit != -1)
		{
			ind[j] = ft_substr(s, strit, i - strit);
			if (ind[j] == NULL)
				if (ft_freemem(ind, j) == NULL)
					return (NULL);
			j++;
			strit = -1;
		}
		i++;
	}
	ind[j] = NULL;
	return (ind);
}

char	**ft_split(char const *s, char c)
{
	char	**ind;

	ind = (char **)malloc((wordcnt(s, c) + 1) * sizeof(char *));
	if (ind == NULL)
		return (NULL);
	ind = str_creation(s, c, ind);
	return (ind);
}
