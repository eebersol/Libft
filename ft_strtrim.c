/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eebersol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:41:17 by eebersol          #+#    #+#             */
/*   Updated: 2015/12/08 18:53:59 by eebersol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*result;
	int		i;
	int		len;

	len = ft_strlen(s);
	i = 0;
	result = (char *)malloc(sizeof(char *) * (len + 1));
	if (s == NULL || result == NULL)
		return (NULL);
	while ((s[len] != '\0') && (s[len - 1] == ' ' || s[len - 1] == '\n' || s[len - 1] == '\t'))
		len--;
	while ((s[i] != '\0') && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		i++;
	if (result == NULL)
		return (NULL);
	s = s + i;
	while (i < len)
	{
		result[i] = *s;
		s++;
		i++;
	}
	result[i] = '\0';
	ft_putstr(result);
	return (result);
}
