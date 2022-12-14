/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycardona <ycardona@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 13:43:42 by ycardona          #+#    #+#             */
/*   Updated: 2022/12/13 15:48:25 by ycardona         ###   ########.fr       */
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

/* void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*ptr;
	size_t	i;

	if (0 < nelem)
	{
		ptr = (void *) malloc(elsize);
		if (ptr == NULL)
			return (NULL);
		ptr = ft_memset(ptr, 0, elsize);
		i = 1;
		while (i < nelem)
		{
			ptr + (int) elsize; = (void *) malloc(elsize);
			if (ptr == NULL)
				return (NULL);
			ptr = ft_memset(ptr, 0, elsize);
			i++;
		}

	}
	return (ptr);
}

int	main(void)
{
	printf("%p\n", ft_calloc(0, sizeof(int)));
} */
