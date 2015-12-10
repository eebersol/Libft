/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eebersol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 12:53:25 by eebersol          #+#    #+#             */
/*   Updated: 2015/12/10 18:56:01 by eebersol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		j;
	char	*cs_1;
	char	*cs_2;

	i = 0;
	cs_1 = ((char *)s1);
	cs_2 = ((char *)s2);
	if (cs_2[0] == '\0')
		return (cs_1);
	while (cs_1[i])
	{
		while (cs_1[i + j] == cs_2[j])
		{
			j++;
			if (cs_2[j] == '\0')
				return (&cs_1[i]);
		}
		j = 0;
		i++;
	}
	return (NULL);
}
