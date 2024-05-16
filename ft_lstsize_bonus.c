/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertfe <albertfe@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 19:28:35 by albertfe          #+#    #+#             */
/*   Updated: 2024/05/13 15:37:25 by albertfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	unsigned int		i;

	if (lst == NULL)
		return (0);
	i = 0;
	while (lst -> next != NULL)
	{
		i++;
		lst = lst -> next;
	}
	if (lst -> next == NULL)
		i++;
	return (i);
}
