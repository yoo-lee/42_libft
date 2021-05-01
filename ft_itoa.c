/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoo-lee <yoo-lee@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 12:17:36 by yoo-lee           #+#    #+#             */
/*   Updated: 2021/04/26 22:44:08 by yoo-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

static int	ft_checkdigits(long nbr)
{
	int	count;

	count = 0;
	if (nbr == 0)
		return (1);
	while (nbr != 0)
	{
		nbr = nbr / 10;
		count++;
	}
	return (count);
}

static char	*ft_putans(char *ans, int a, long nbr)
{
	if (nbr == 0)
		ans[0] = '0';
	ans[a] = '\0';
	while (nbr != 0)
	{
		ans[a - 1] = nbr % 10 + '0';
		a--;
		nbr = nbr / 10;
	}
	return (ans);
}

char	*ft_itoa(int n)
{
	char	*ans;
	int		a;
	long	nbr;

	nbr = (long)n;
	if (nbr < 0)
	{
		ans = (char *)malloc(sizeof(char) * (ft_checkdigits(nbr) + 2));
		if (!ans)
			return (NULL);
		a = ft_checkdigits(nbr) + 1;
		ans[0] = '-';
		nbr *= -1;
	}
	else
	{
		ans = (char *)malloc(sizeof(char) * (ft_checkdigits(nbr) + 1));
		if (!ans)
			return (NULL);
		a = ft_checkdigits(nbr);
	}
	return (ft_putans(ans, a, nbr));
}
