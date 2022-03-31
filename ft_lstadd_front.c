/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoo-lee <yoo-lee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 20:54:26 by yoo-lee           #+#    #+#             */
/*   Updated: 2022/03/31 13:30:18 by yoo-lee          ###   ########.fr       */
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