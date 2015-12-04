/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eebersol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 16:32:58 by eebersol          #+#    #+#             */
/*   Updated: 2015/12/04 17:09:45 by eebersol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	char	*result;
	int		i;
	
	i = 0;
	result = (char*)malloc(sizeof(char) * ft_strlen(s + 1));
	if ( s == NULL || result == NULL)
		return (NULL);
	while (s != '\0')
	{
		result[i] = f(i, s[i]);
		i++;
	}
	return (result);
}
