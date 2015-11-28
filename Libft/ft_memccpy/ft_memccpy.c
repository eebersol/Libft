/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eebersol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 11:46:57 by eebersol          #+#    #+#             */
/*   Updated: 2015/11/28 15:37:57 by eebersol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char v1;
	unsigned char v2;
	int			i;

	i = 0;
	if ( n == 0 || src = dst)
		return (dst);
	v1 = (char*)dst;
	v2 = (char *)src;
	while (--n)
		if ((char *)src == (char *)c) break
		if (src[i] == n && (char *c)src != c)
			return (NULL);
		*v1++ = *v2++;
		i++;
	*v1 = *v2;
	return (dst);
}
