/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoo-lee <yoo-lee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 20:54:41 by yoo-lee           #+#    #+#             */
/*   Updated: 2022/03/31 13:30:19 by yoo-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

//while(lst->next) dont forget ->next 

/* int		main(void)
{
	char	str[] = "test";

	t_list	*elem1;
	t_list	*elem2;
	t_list	*elem3;
	t_list	*elem4;
	t_list	*elem5;
	t_list	*elem6;
	t_list	*ret;

	if(!(elem1 = malloc(sizeof(t_list))))
		return (0);
	if(!(elem2 = malloc(sizeof(t_list))))
		return (0);
	if(!(elem3 = malloc(sizeof(t_list))))
		return (0);
	if(!(elem4 = malloc(sizeof(t_list))))
		return (0);
	if(!(elem5 = malloc(sizeof(t_list))))
		return (0);
	if(!(elem6 = malloc(sizeof(t_list))))
		return (0);

	elem1->next = elem2;
	elem2->next = elem3;
	elem3->next = elem4;
	elem4->next = elem5;
	elem5->next = elem6;
	elem6->next = NULL;

	elem6->content = (void *)str;
	ret = ft_lstlast(elem1);
	printf("\n%s\n", (char *)ret->content);
} */
