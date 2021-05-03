/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoo-lee <yoo-lee@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 17:26:44 by yoo-lee           #+#    #+#             */
/*   Updated: 2021/05/03 10:51:21 by yoo-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char
	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;

	if (s2[0] == '\0')
		return ((char *)s1);
	if (ft_strlen(s1) < ft_strlen(s2))
		return ((char *)0);
	i = 0;
	j = 0;
	while (s1[i] && i < len)
	{
		while (s1[i + j] && s1[i + j] == s2[j] && i + j < len)
		{
			if (s2[j + 1] == '\0')
				return ((char *)&s1[i]);
			j++;
		}
		i++;
		j = 0;
	}
	return ((char *)0);
}
