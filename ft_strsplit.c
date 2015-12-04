/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eebersol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 14:55:51 by eebersol          #+#    #+#             */
/*   Updated: 2015/12/04 17:42:00 by eebersol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{	
	char 	**dst;
	size_t	len;

	len = ft_strlen(s);
	dst = (char **) ft_memalloc(sizeof(char *) * (len + 1));
	if (c == 1 || !s)
		return (dst);
	return (dst);
}
