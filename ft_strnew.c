/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eebersol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 16:24:30 by eebersol          #+#    #+#             */
/*   Updated: 2015/12/07 17:20:18 by eebersol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*s;

	if (size >= 4294967295)
		return (0);
	s = (char *)malloc(sizeof(size));
	if (s == NULL)
		return (NULL);
	while (!s)
		ft_bzero(s, size);
	return (s);
}
