/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eebersol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:25:19 by eebersol          #+#    #+#             */
/*   Updated: 2015/12/07 19:29:48 by eebersol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f) (char))
{
	char	*result;
	char	*tmp_result;
	
	result = (char *)malloc(sizeof(char) * ft_strlen(s + 1));
	if (s == NULL)
		return (NULL);
	if (result == NULL)
		return (NULL);
	tmp_result = result;
	while (s != '\0')
	{
		*tmp_result = (*f)(*s);
		tmp_result++;
		s++;
	}
	*tmp_result = '\0';
	return (result);
}
