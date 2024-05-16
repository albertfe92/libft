/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertfe <albertfe@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 19:25:54 by albertfe          #+#    #+#             */
/*   Updated: 2024/05/13 15:19:23 by albertfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*list;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	list = NULL;
	while (lst != NULL)
	{
		node = ft_lstnew(f(lst -> content));
		if (node == NULL)
		{
			ft_lstclear(&list, del);
			return (NULL);
		}
		ft_lstadd_back(&list, node);
		lst = lst -> next;
	}
	return (list);
}
