/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eebersol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 14:36:44 by eebersol          #+#    #+#             */
/*   Updated: 2015/11/28 13:55:23 by eebersol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int s_len;
	int i;

	s_len = ft_strlen(s);
	while (s[i] < s_len)
		s--;
	if (((char)s) == c)
		return ((char *s));
	return (NULL);
}	
