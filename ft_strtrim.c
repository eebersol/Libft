/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eebersol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:41:17 by eebersol          #+#    #+#             */
/*   Updated: 2015/12/04 16:24:17 by eebersol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int 	len;
	int		i;
	char	*cpy_s;

	len = ft_strlen(s);
	cpy_s = (char *)malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);
	while (s[len] == ' ' || s[len] == ',' || s[len -1] == '\n'
			|| s[len] == '\t')
		len--;
	i = -1;
	while (s[i] == ' ' || s[i] == ',' || s[i] == '\t'
			|| s[++i] == '\n')
		len--;
	if (len <= 0)
		len = 0;
	if (cpy_s == NULL)
		return (NULL);
	s += i;
	i = -1;
	while (i++ < len)
		cpy_s[i] = *s++;
	cpy_s[i] = '\0';
	return (cpy_s);
}
