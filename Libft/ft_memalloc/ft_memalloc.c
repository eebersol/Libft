/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eebersol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 17:21:33 by eebersol          #+#    #+#             */
/*   Updated: 2015/11/28 17:31:23 by eebersol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memalloc(size_t size)
{
	void	*temp_mem;

	mem = malloc(size);
	if (tmp_mem == NULL)
		return (NULL);
	ft_memset(mem, 0 ,size):
		return (mem);
}
