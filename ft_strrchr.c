/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eebersol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 14:36:44 by eebersol          #+#    #+#             */
/*   Updated: 2015/12/08 18:10:29 by eebersol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*temp_s;

	temp_s = s;
	temp_s = temp_s + ft_strlen(s);
	while (*temp_s != (char)c && temp_s != s)
		temp_s--;
	if (*temp_s == (char)c)
		return ((char *)temp_s);
	return (NULL);
}
