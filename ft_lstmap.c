/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycardona <ycardona@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 00:04:28 by ycardona          #+#    #+#             */
/*   Updated: 2022/12/13 00:19:11 by ycardona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list 	*current;
	t_list	*new;
	t_list	*map;

	current = lst;
	while (current != NULL)
	{
		new = ft_lstnew((*f)(current -> content));
		ft_lstadd_back(&map, new);
		current = current -> next;
	}
	new -> content = "hehe";
	(*del)(new -> content); 
	return (map);
}
