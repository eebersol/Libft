/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eebersol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 12:02:32 by eebersol          #+#    #+#             */
/*   Updated: 2015/11/27 14:12:02 by eebersol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *s1, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[j] != '\0')
	{
		j++;
	}
	while (s2[i] != '\0')
	{
		s1[j] = s2[i];
		i++;
		j++;
	}
	s1[i] = '\0';
	return (s1);
}

int	main(void)
{
	char s2[30] = "world";
	char s1[] = "Hello";

	strcat(s2, s1);
	printf("%s", s2);
	return (0);
}
