/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycardona <ycardona@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 13:43:42 by ycardona          #+#    #+#             */
/*   Updated: 2022/12/09 14:56:13 by ycardona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*ptr;

	ptr = (void *) malloc(nelem * elsize);
	if (ptr == NULL)
		return (NULL);
	ptr = ft_memset(ptr, 0, nelem * elsize);
	return (ptr);
}
