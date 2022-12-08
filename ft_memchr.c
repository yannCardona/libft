/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycardona <ycardona@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:57:24 by ycardona          #+#    #+#             */
/*   Updated: 2022/12/08 16:43:12 by ycardona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*c_s;
	size_t			i;

	c_s = (char *) s;
	i = 0;
	while (i < n)
	{
		if (c_s[i] == c)
			return ((void *) &c_s[i]);
		i++;
	}
	return (NULL);
}

/* int	main(void)
{
	int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
    printf("%p | %p", memchr(tab, -1, 7), ft_memchr(tab, -1, 7));
}
 */