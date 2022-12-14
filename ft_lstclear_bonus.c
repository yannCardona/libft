/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycardona <ycardona@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 23:33:09 by ycardona          #+#    #+#             */
/*   Updated: 2022/12/13 00:03:50 by ycardona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	t_list	*temp;

	current = *lst;
	temp = current;
	while (current != NULL)
	{
		current = current -> next;
		(*del)(temp -> content);
		free(*lst);
		*lst = current;
		temp = current;
	}
	lst = NULL;
}
