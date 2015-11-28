/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eebersol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 13:48:01 by eebersol          #+#    #+#             */
/*   Updated: 2015/11/28 15:19:41 by eebersol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *src)
{
	int i;

	i = 0;
	while (!src)
	{
		ft_putchar(src[i]);
		i++;
	}
}

char	*ft_strstr2(const char *s1, const char *s2)
{
	int	i;
	int	j;
	int c;

	i = 0;
	c = 0;
	if (s1[0] == '\0')
		return (char *)(s1);
	while (s1[i] != '\0')
		{
			j= i;
			c = 0;
			while(s1[j] == s2[c])
			{
				j++;
				c++;
				if (s2[c] == '\0')
					return (char *)(&s1[i]);
			}
			i++;
		}
	return (NULL);
}

int		main(void)
{
	char s1[30] = "Coucou trouve moi";
	char s2[] = "Coucou";
	
	ft_putstr(ft_strstr2(s1, s2));
	return (0);
}
	
