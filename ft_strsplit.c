/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eebersol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 14:55:51 by eebersol          #+#    #+#             */
/*   Updated: 2015/12/12 20:49:37 by eebersol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_part_nbr(const char *s, char c)
{
	int nbr;
	int part;

	nbr = 0;
	part = 0;
	while (*s != '\0')
	{
		if (part == 1 && *s == c)
			part = 0;
		if (part == 0 && *s != c)
		{
			part = 1;
			nbr++;
		}
		s++;
	}
	return (nbr);
}

static int		ft_part_len(const char *s, char c)
{
	int len;

	len = 0;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**t;
	int		nb_word;
	int		i;

	i = 0;
	nb_word = ft_part_nbr((const char *)s, c);
	t = (char **)malloc(sizeof(*t) * (ft_part_nbr((const char *)s, c) + 1));
	if (t == NULL || s == NULL)
		return (NULL);
	while (nb_word--)
	{
		while (*s == c && *s != '\0')
			s++;
		t[i] = ft_strsub((const char *)s, 0, ft_part_len((const char *)s, c));
		if (t[i] == NULL)
			return (NULL);
		s = s + ft_part_len(s, c);
		i++;
	}
	t[i] = NULL;
	return (t);
}
