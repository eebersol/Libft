/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eebersol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 17:25:16 by eebersol          #+#    #+#             */
/*   Updated: 2015/12/08 21:07:18 by eebersol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len_int(int nbr)
{
	int nbr_len;

	if (nbr == 0)
		return (1);
	nbr_len = 0;
	while (nbr != 0)
	{
		nbr_len++;
		nbr = nbr / 10;
	}
	return (nbr_len);
}

static int ft_value_int(int nbr)
{
	if (nbr < 0)
		return (1);
	return (0);
}

char	*ft_itoa(int n)
{
	int		nbr_len;
	int		value;
	char 	*result;

	value = ft_value_int(n);
	nbr_len = ft_len_int(n);
	result = NULL;
	result = (char *)malloc(sizeof(char) * (nbr_len + value  +1));
	if (result)
	{
		result = result + nbr_len + value;
		*result = '\0';
		if (!n)
			*--result = '0';
		while (n != 0)
		{
			*--result = ft_abs(n % 10) + '0';
			n = n /10;
		}
		if (value)
			*--result = '-';
	}
	return (result);
}
