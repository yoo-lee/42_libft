/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoo-lee <yoo-lee@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 14:51:27 by yoo-lee           #+#    #+#             */
/*   Updated: 2021/05/03 08:55:15 by yoo-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memset(void *buf, int ch, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = buf;
	while (i < n)
	{
		str[i] = (unsigned char)ch;
		i++;
	}
	return (buf);
}
