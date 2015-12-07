/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eebersol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:41:17 by eebersol          #+#    #+#             */
/*   Updated: 2015/12/07 19:31:02 by eebersol         ###   ########.fr       */
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
	if (s == NULL)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (s[len - 1] == ' ' || s[len - 1] == '\n' || s[len - 1] == '\t')
		len--;
	if (len <= 0)
		len = 0;
	if (result == NULL)
		return (NULL);
	while (i <= len)
		result[i] = s[i];
		i++;
	result[i] = '\0';
	return (result);
}
