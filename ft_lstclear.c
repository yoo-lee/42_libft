/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoo-lee <yoo-lee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 20:54:31 by yoo-lee           #+#    #+#             */
/*   Updated: 2022/03/31 13:30:22 by yoo-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*elem;

	if (!del)
		return ;
	while (*lst)
	{
		del((*lst)->content);
		free((void *)((*lst)->next));
		elem = *lst;
		*lst = elem->next;
		free(elem);
	}
	*lst = NULL;
}

//lst: The address of a pointer to a node.
//del: The address of the function used to delete
//the content of the node.
/* Deletes and frees the given node and every
successor of that node, using the function ’del’
and free(3).
Finally, the pointer to the list must be set to
NULL. */
