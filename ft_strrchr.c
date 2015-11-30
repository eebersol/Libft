/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eebersol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 14:36:44 by eebersol          #+#    #+#             */
/*   Updated: 2015/11/30 17:25:10 by eebersol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int s_len;
	int i;
	unsigned char *c_s;
	unsigned char c_c;

	i = 0;
	c_c = ((unsigned char )c);
	c_s = ((unsigned char *)s);
	s_len = ft_strlen(s);
	while (c_s[i] < s_len)
		s--;
	if (((char)s) == c_c)
		return ((char*)s);
	return (NULL);
}
