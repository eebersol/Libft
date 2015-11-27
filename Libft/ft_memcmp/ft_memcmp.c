/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eebersol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 12:13:28 by eebersol          #+#    #+#             */
/*   Updated: 2015/11/27 12:29:10 by eebersol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memcmp(void *s1, const void *s2, size_t n)
{
	unsigned char	*strs1;
	unsigned char	*strs2;

	if (s1 && s2)
	{
		strs1 = ((char *)s1);
		strs2 = ((char *)s2);
	}
	while (n--)
	{
		if (*strs1 ! *strs2)
			return (*strs1 - *strs2);
		*strs1++;
		*strs2++;
	}
}
return (0);
