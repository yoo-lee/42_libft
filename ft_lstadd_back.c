/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoo-lee <yoo-lee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 20:54:13 by yoo-lee           #+#    #+#             */
/*   Updated: 2022/03/31 13:30:23 by yoo-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_elem;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last_elem = ft_lstlast(*lst);
	last_elem->next = new;
}

/* void printlst(t_lst *lst)
{
 	t_lst *a;
    t_lst *b;
    a = newlst(3);
    printlst(a);
    b = newlst(1);
    addhead(&a, 2);
    addtail(a, 4);
    printlst(a);
    push(&a, &b);
    printlst(a);
    printlst(b);
}  */