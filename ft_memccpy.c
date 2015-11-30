/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eebersol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 11:46:57 by eebersol          #+#    #+#             */
/*   Updated: 2015/11/30 17:52:54 by eebersol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*v1;
	unsigned char	*v2;
	size_t				i;
	unsigned char	c_c;

	v1 = (unsigned char *)dst;
	v2 = (unsigned char *)src;
	c_c = ((unsigned char)c);
	i = 0;
	if ( n == 0 || src == dst)
		return (dst);

	while (--n)
		if ((unsigned char)src == c_c) break;
		if (i == n && (unsigned char *)src != (unsigned char *)dst)
			return (NULL);
		*v1++ = *v2++;
		i++;
	*v1 = *v2;
	return (dst);
}
