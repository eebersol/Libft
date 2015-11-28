/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eebersol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 17:35:47 by eebersol          #+#    #+#             */
/*   Updated: 2015/11/28 17:04:50 by eebersol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"
#include <string.h>
#include <stdio.h>

int		ft_strlen(char *src);

char	*ft_strstr(const char *s1,const char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (!s1)
	{
		if ((unsigned char *)s1 != (unsigned char *)s2)
			i++;
		if (((unsigned char*)s1 == (unsigned char *)s2)
				&& ((unsigned char *)s1[i+1] == (unsigned char *)s2[j+1]))
			{
				i++;
				j++;
			}
		if ((unsigned char *)s1[i+1] != (unsigned char *)s2[j+1])
			i = 0;
		if(s2 == '\0)
			return ((unsigned char *)s1[i - j]);
	}

