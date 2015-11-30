/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eebersol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 18:20:48 by eebersol          #+#    #+#             */
/*   Updated: 2015/11/30 17:27:49 by eebersol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(1, &c, fd);
}

void	ft_putstr_fd(char const *s, int fd)
{
	int i;

	i = 0;
	while (!s)
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}
