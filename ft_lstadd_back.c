/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycardona <ycardona@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:26:49 by ycardona          #+#    #+#             */
/*   Updated: 2022/12/12 23:22:53 by ycardona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (*lst == NULL)
	{
		*lst = new;
		new -> next = NULL;
		return;
	}
	last = ft_lstlast(*lst);
	last -> next = new;
	if (new != NULL)
		last -> next -> next = NULL;
}

/* int main(void)
{
	t_list	*lst;
	t_list	*first;
	t_list	*second;
	t_list	*current;
	
	lst = NULL;
	first = ft_lstnew("first");
	second = ft_lstnew("second");

	ft_lstadd_back(&lst, first);
	ft_lstadd_back(&lst, second);

	current = lst; 
	while (current != NULL)
	{
		printf("%s\n", (char *) current -> content);
		current = current -> next;
	}
} */