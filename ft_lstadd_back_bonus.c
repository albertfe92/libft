/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertfe <albertfe@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 19:28:54 by albertfe          #+#    #+#             */
/*   Updated: 2024/04/25 18:57:22 by albertfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmplst;

	if (lst != NULL)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			tmplst = ft_lstlast(*(lst));
			tmplst -> next = new;
		}
	}
}
