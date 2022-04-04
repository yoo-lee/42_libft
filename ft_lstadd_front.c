/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoo-lee <yoo-lee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 20:54:26 by yoo-lee           #+#    #+#             */
/*   Updated: 2022/04/02 20:55:25 by yoo-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (!*lst)
		*lst = new;
	else
		new->next = *lst;
	*lst = new;
}

// lst = (list1 -> list2 -> list3)
// new = head
// new = head -> list1 -> list2 -> list3
// list = (list1 -> ... -> list3)
// 23 行目の根拠は以上の理由による。

/* lst: The address of a pointer to the first link of
a list.
new: The address of a pointer to the node to be
added to the list
Adds the node ’new’ at the beginning of the list. */

/* void printlst(t_list *lst)
{
    const t_list *head = lst;

    while(1)
    {
        printf("%ld ",lst->num);
        lst = lst->next;
        if (lst == head)
        {
        printf("\n");
        break;
        } 
    }
}

int main ()
{
    t_list *a;
    t_list *b;
    ft_lstadd_front(*a, b);   
    printlst(a);
    printlst(b);
} */