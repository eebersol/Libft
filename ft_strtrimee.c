/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrimee.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eebersol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:41:17 by eebersol          #+#    #+#             */
/*   Updated: 2015/12/07 19:24:03 by eebersol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*result;
	int		start;
	size_t	len;

	len = ft_strlen(s);
	start = 0;
	result = (char *)malloc(sizeof(char *) * (len));
	if (s == NULL)
		return (NULL);
	while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
		start++;
	while (s[len - 1] == ' ' || s[len - 1] == '\n' || s[len - 1] == '\t')
		len--;
	if (len <= 0)
		len = 0;
	if (result == NULL)
		return (NULL);
	ft_strsub(s, start, len);
	*result = *s;
	return (result);
}
