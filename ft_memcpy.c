/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoo-lee <yoo-lee@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 13:59:16 by yoo-lee           #+#    #+#             */
/*   Updated: 2021/04/26 20:53:31 by yoo-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memcpy(void *buf1, const void *buf2, size_t n)
{
	size_t					i;
	unsigned char			*str1;
	const unsigned char		*str2;

	if (buf1 == buf2)
		return (buf1);
	i = -1;
	str1 = buf1;
	str2 = buf2;
	while (++i < n)
		str1[i] = str2[i];
	return (buf1);
}
