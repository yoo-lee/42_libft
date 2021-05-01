/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoo-lee <yoo-lee@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 12:28:47 by yoo-lee           #+#    #+#             */
/*   Updated: 2021/04/26 20:53:43 by yoo-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

static unsigned long	ft_return_num(int i, int minus, const char *str)
{
	unsigned long	num;

	num = 0;
	while (str[i] && '0' <= str[i] && str[i] <= '9')
	{
		if (num > (unsigned long)(LONG_MAX / 10))
		{
			if (minus == 1)
				return (LONG_MAX);
			else
				return (LONG_MIN);
		}
		else if (num == (unsigned long)(LONG_MAX / 10))
		{
			if ((str[i] - '0') > LONG_MAX % 10 && minus == 1)
				return (LONG_MAX);
			if ((str[i] - '0') > LONG_MAX % 10 + 1 && minus == -1)
				return (LONG_MIN);
		}
		num *= 10;
		num += str[i] - '0';
		i++;
	}
	return (num);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		minus;

	i = 0;
	minus = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			minus *= -1;
		i++;
	}
	return (ft_return_num(i, minus, str) * minus);
}