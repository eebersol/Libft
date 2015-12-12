/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eebersol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 19:55:29 by eebersol          #+#    #+#             */
/*   Updated: 2015/12/12 20:16:45 by eebersol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*list;

	list = (t_list*)malloc(sizeof(t_list));
//	ft_lstiter(lst, f(list));
	list = lst;

	if (f(list) == NULL)
		return (NULL);
	return (list);
}
