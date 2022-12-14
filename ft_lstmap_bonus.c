/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycardona <ycardona@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 00:04:28 by ycardona          #+#    #+#             */
/*   Updated: 2022/12/13 15:33:32 by ycardona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*current;
	t_list	*new;
	t_list	*map;

	current = lst;
	map = NULL;
	while (current != NULL)
	{
		new = ft_lstnew((*f)(current -> content));
		if (new == NULL)
			ft_lstclear(&map, (*del));
		ft_lstadd_back(&map, new);
		current = current -> next;
	}
	return (map);
}

/* int	main(void)
{
	t_list * l =  NULL;
	t_list * l2 =  NULL;
	ft_lstadd_back(&l, ft_lstnew("1"));
	ft_lstadd_back(&l, ft_lstnew("2"));
	ft_lstadd_back(&l2, ft_lstnew("3"));
	ft_lstadd_back(&l2, ft_lstnew("4"));
	ft_lstadd_back(&l, l2);
	printf("%s\n", (char *) l -> content);
	printf("%s\n%s\n", (char *) ((((((l->next))->next))->next)-> content), 
	(char *) (((((l->next))->next))->next)-> next);
} */