/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoo-lee <yoo-lee@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 12:13:03 by yoo-lee           #+#    #+#             */
/*   Updated: 2021/04/26 20:53:07 by yoo-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void
	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	res;

	if (count * size > INT_MAX)
		return (NULL);
	if (!count || !size)
		res = 1;
	else
	{
		res = size * count;
	}
	ptr = malloc(res);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, res);
	return (ptr);
}
