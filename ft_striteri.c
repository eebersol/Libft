/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eebersol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:16:40 by eebersol          #+#    #+#             */
/*   Updated: 2015/12/04 15:24:56 by eebersol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f) (unsigned int, char *s))
{
	unsigned int	i;

	if (s == NULL || f == NULL)
		return ;
	i = -1;
	while (s[i])
	{	
		f(i, s + i);
		i++;
	}

}
