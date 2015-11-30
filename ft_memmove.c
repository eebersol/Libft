/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eebersol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 11:51:29 by eebersol          #+#    #+#             */
/*   Updated: 2015/11/30 16:00:00 by eebersol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *tmp_dst;
	unsigned char *tmp_src;

	if (dst && src)
	{
		tmp_dst = (unsigned char *)dst;
		tmp_src = (unsigned char *)src;
		if (dst > src)
		{
			tmp_dst = tmp_dst + len;
			tmp_src = tmp_src + len;
			while ( --len)
				*--tmp_dst = *--tmp_src;
		}
			else 
				ft_memcpy(dst, src, len);
	}
	return (dst);
}
