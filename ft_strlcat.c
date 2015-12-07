/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eebersol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 18:18:34 by eebersol          #+#    #+#             */
/*   Updated: 2015/12/07 16:54:37 by eebersol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (dst[i] && i < n)
		i++;
	j = i;
	while (src[i - j] && i < n - 1)
	{
		dst[i] = src[i - j];
		i++;
	}
	if (j < n)
		dst[i] = '\0';
	return (j = ft_strlen(src));
}
