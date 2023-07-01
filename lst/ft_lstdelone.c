/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoo-lee <yoo-lee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 20:54:35 by yoo-lee           #+#    #+#             */
/*   Updated: 2022/04/04 11:09:26 by yoo-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
	lst = NULL;
}
//lst: The node to free.
//del: The address of the function used to delete the content.
/* ft_lstdelone(lst, free);
strdup("a");
struct a {
char *a;
char *b;
}

struct *x = {ft_strdup("a"), ft_strdup("b")};
free_x(){
free(a);
free(b);
}
ft_lstdelone(x, free_x) */