/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eebersol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 14:41:18 by eebersol          #+#    #+#             */
/*   Updated: 2015/11/25 15:01:28 by eebersol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*cur;

	if (len == 0)
		return (b);
	cur = (unsigned char *)b;
	while (len --)
	{
		*cur = (unsigned char)c;
		if (len)
			cur ++;
	}
	return (b);
}

int		main()
{
	char b[50];
	
	strcpy(b,"This is string.h library function");
	puts(b);
	memset(b,'$',7);
	puts(b);
	return (0);
}
