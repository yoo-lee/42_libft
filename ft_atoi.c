/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoo-lee <yoo-lee@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 12:28:47 by yoo-lee           #+#    #+#             */
/*   Updated: 2021/04/23 15:29:17 by yoo-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	whatsign(const char *str)
{
	int		i;
	int		sign;

	i = 0;
	sign = 1;
	while (str[i] && !ft_isdigit(str[i]))
	{
		if (str[i] == '-')
			sign = -1;
		else if (str[i] == '+')
			sign = 1;
		i++;
	}
	return (sign);
}

int	ft_atoi(const char *str)
{
	int		n;
	int		i;
	int		sign;
	char	*s;

	n = 0;
	i = 0;
	s = ft_strdup(str);
	sign = (whatsign(s));
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'
		|| s[i] == '\v' || s[i] == '\r' || s[i] == '\f')
		i++;
	if (s[i] == '+' || s[i] == '-')
		i++;
	while (ft_isdigit(s[i]))
	{
		n *= 10;
		n += (s[i] - '0');
		i++;
	}
	return (n * sign);
}
