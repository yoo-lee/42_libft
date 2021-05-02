/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoo-lee <yoo-lee@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 21:32:22 by yoo-lee           #+#    #+#             */
/*   Updated: 2021/04/26 21:34:09 by yoo-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t					i;
	unsigned char			*str1;
	const unsigned char		*str2;

	i = 0;
	str1 = dest;
	str2 = src;
	while (i < n)
	{
		str1[i] = str2[i];
		if (str2[i] == (unsigned char)c)
			return (&str1[i + 1]);
		i++;
	}
	return (NULL);
}
