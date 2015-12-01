/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eebersol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 11:56:42 by eebersol          #+#    #+#             */
/*   Updated: 2015/12/01 17:05:38 by eebersol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char 	*ptr_s;
	unsigned char	c2;
	size_t			i;

	i = 0;
	c2 = (unsigned char)c;
 	ptr_s = (unsigned char *)s;
	while (i < n)
	{
		if (ptr_s[i] == c2)
			return (ptr_s + i);
		i++;
	}
	return (NULL);
}
