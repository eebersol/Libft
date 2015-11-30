/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eebersol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 18:23:13 by eebersol          #+#    #+#             */
/*   Updated: 2015/11/30 19:49:51 by eebersol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t size;

	size = 0;
	for (i = 0; size < n; i++)
	{
		if (s1[0] == '\0')
			return (0);
		while (s1[i] == s2[size])
		{
			i++;
			size++;
		}
		if (s2[size] == '\0')
			return ((char *)(&s1[i - size]));
		i++;
	}
	return (0);
}
