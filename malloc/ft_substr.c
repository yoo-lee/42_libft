/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoo-lee <yoo-lee@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 12:21:46 by yoo-lee           #+#    #+#             */
/*   Updated: 2021/04/23 12:21:48 by yoo-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ans;
	unsigned int	i;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s) || len == 0)
		return (ft_strdup(""));
	ans = (char *)malloc(sizeof(char) * (len + 1));
	if (!ans)
		return (NULL);
	i = 0;
	while (s[start + i] && i < len)
	{
		ans[i] = s[start + i];
		i++;
	}
	ans[i] = '\0';
	return (ans);
}
