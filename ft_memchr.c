/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eebersol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 11:56:42 by eebersol          #+#    #+#             */
/*   Updated: 2015/11/30 16:03:55 by eebersol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *tmp_s;

 	tmp_s = (unsigned char *)s;
	while (--n)
	{
		if ((unsigned char)tmp_s == (unsigned char)c)
			return ((void *)tmp_s);
		tmp_s++;
	}
	return (NULL);
}
