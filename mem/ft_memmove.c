/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoo-lee <yoo-lee@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 14:22:17 by yoo-lee           #+#    #+#             */
/*   Updated: 2021/04/21 14:34:22 by yoo-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memmove(void *buf1, const void *buf2, size_t n)
{
	size_t					i;
	unsigned char			*str1;
	const unsigned char		*str2;

	if (buf1 == buf2)
		return (buf1);
	str1 = buf1;
	str2 = buf2;
	if (str2 <= str1)
	{
		i = n;
		while (i-- > 0)
			str1[i] = str2[i];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			str1[i] = str2[i];
			i++;
		}
	}
	return (buf1);
}
