/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycardona <ycardona@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:12:06 by ycardona          #+#    #+#             */
/*   Updated: 2022/12/03 18:48:01 by ycardona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, t_size_t n)
{
	char		*c_dst;
	const char	*c_src;
	t_size_t	i;

	c_dst = (char *) dst;
	c_src = (const char *) src;
	i = 0;
	while (i < n && (c_dst[i] || c_src[i]))
	{
		c_dst[i] = c_src[i];
		i++;
	}
	return (dst);
}
