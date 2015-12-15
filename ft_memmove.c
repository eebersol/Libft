/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eebersol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 11:51:29 by eebersol          #+#    #+#             */
/*   Updated: 2015/12/15 19:41:16 by eebersol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*var;

	var = (unsigned char*)malloc(sizeof(*var) * len);
	ft_memcpy(var, src, len);
	ft_memcpy(dst, var, len);
	free(var);
	return (dst);
}
