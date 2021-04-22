/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoo-lee <yoo-lee@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 13:59:16 by yoo-lee           #+#    #+#             */
/*   Updated: 2021/04/21 14:19:03 by yoo-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*ptr;
	const unsigned char	*ptr2;

	ptr = (unsigned char *)dst;
	ptr2 = (unsigned char *)src;
	while (n-- > 0)
		*(ptr++) = *(ptr2++);
	return (dst);
}
