/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eebersol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 12:31:30 by eebersol          #+#    #+#             */
/*   Updated: 2015/11/28 15:09:39 by eebersol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (s1[j] != '\0')
		j++;
	while (s2[i] != '\0' || n--)
	{
		s1[j] = s2[i];
		i++;
		j++;
	}
	s1[i] = '\0';
	return (s1);
}

int		main(void)
{
	char s2[50] = " world";
	char s1[50] = "Hello";

	printf("avant : %s\n", s2);
	ft_strncat(s1, s2, 4);
	printf("apres : %s\n", s1);
	return (0);
}
