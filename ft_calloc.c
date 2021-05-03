/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoo-lee <yoo-lee@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 12:13:03 by yoo-lee           #+#    #+#             */
/*   Updated: 2021/05/03 09:33:30 by yoo-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void
	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	res;

	if (!count || !size)
		res = 1;
	else
	{
		if (__SIZE_MAX__ / count < size)
			return (NULL);
		res = size * count;
	}
	ptr = malloc(res);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, res);
	return (ptr);
}
