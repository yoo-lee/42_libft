/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy+.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoo-lee <yoo-lee@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 22:29:01 by yoo-lee           #+#    #+#             */
/*   Updated: 2021/04/26 21:31:56 by yoo-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void
    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    unsigned char    *cpy_src;
    unsigned char    *cpy_dest;

    if (!dest && !src)
        return (NULL);
    cpy_src = (unsigned char*)src;
    cpy_dest = (unsigned char*)dest;
    
    while (n-- > 0)
    {
        *cpy_dest = *cpy_src;
        if (*cpy_src == (unsigned char)c)
            {
                return (++cpy_dest);
            }
        cpy_dest++;
        cpy_src++;
    }
    return (NULL);
}
