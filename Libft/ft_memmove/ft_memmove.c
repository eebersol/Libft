/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eebersol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 11:51:29 by eebersol          #+#    #+#             */
/*   Updated: 2015/11/28 16:35:07 by eebersol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n);

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char tmp_src;
	unsigned char tmp_dst;

	if (s1 && s2)
	{
		tmp_src = (unsigned char *)src;
		tmp_dst = (unsigned char *)dst;
		if (dst > src)
		{
			tmp_dst = tmp_dst + len;
			tmp_src = tmp_src + len;
			while (--n)
				*--tmp_dst = *--tmp_src;
		}
		else
			ft_memcpy(dst, src, n);
	}
	return (dst);
}
