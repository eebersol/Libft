/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eebersol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 12:53:25 by eebersol          #+#    #+#             */
/*   Updated: 2015/12/01 20:28:25 by eebersol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int i;
	int size;

	i = 0;
	if (s2[i] == '"')
		i++;
	if (s1[i] == '\0')
		return (0);
	while (s1[i] != '\0')
	{
		size = 0;
		while (s1[i] == s2[size])
		{
			i++;
			size++;
		}
		if (s2[size] == '\0')
			return ((char *)(&s1[i - size]));
		i++;
	}
	return (NULL);
}
