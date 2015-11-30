/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eebersol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 11:40:19 by eebersol          #+#    #+#             */
/*   Updated: 2015/11/30 17:01:58 by eebersol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *v1;
	unsigned char *v2;

	if (n == 0 || src == dst)
		return (dst);
	v1 = (unsigned char *)dst;
	v2 = (unsigned char *)src;
	while (--n)
		*v1++ = *v2++;
	*v1 = *v2;
	return (dst);
}
