/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eebersol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 14:31:03 by eebersol          #+#    #+#             */
/*   Updated: 2015/11/30 17:27:35 by eebersol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void ft_putchar(char c);

void	ft_putnbr(int n)
{
	if(n < 0)
	{
		ft_putchar('-');
	}
	if (n < 10)
		ft_putnbr(n + 48);
	if ( n > 9)
	{
		ft_putnbr(n/10);
		ft_putnbr(n%10);
	}
}
