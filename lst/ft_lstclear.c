/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoo-lee <yoo-lee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 20:54:31 by yoo-lee           #+#    #+#             */
/*   Updated: 2022/04/04 11:09:56 by yoo-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		(*lst) = tmp;
	}
	*lst = NULL;
}
/* void	drop(void *content)
{
	free(content);
	content = NULL;
} */

/* int main ()
{
	t_list *p1 = ft_lstnew("1");
	t_list *p2 = ft_lstnew("1");
	
	ft_lstadd_back(&p2, p1);
	ft_lstclear(&p2 , &drop);
}   */
//lst clear 2４行目のフリーの位置が、後方に行く？

/* int main(void)
{
	t_list *list = ft_lstnew(ft_strdup("asdf"));
	char	*s1 = ft_strdup("asdf");
	char	*s2 = ft_strdup("asdf");
	char	*s3 = ft_strdup("asdf");

	ft_lstadd_back(&list, ft_lstnew(s1));
	ft_lstadd_back(&list, ft_lstnew(s2));
	ft_lstadd_back(&list, ft_lstnew(s3));
	write(1, "ok\n", 3);

	ft_lstclear(&list, &drop);
	write(1, "ok2\n", 3);

	return (0);
}  */

// lst to be
//lst: The address of a pointer to a node.
//del: The address of the function used to delete
//the content of the node.
/* Deletes and frees the given node and every
successor of that node, using the function ’del’
and free(3).
Finally, the pointer to the &list must be set to
NULL. */
//why using double pointer is the lst is pointer.
//so its double pointer.
