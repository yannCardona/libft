/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycardona <ycardona@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 18:00:11 by ycardona          #+#    #+#             */
/*   Updated: 2022/12/03 18:52:23 by ycardona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*c_dst;
	const char	*c_src;
	char		*temp;
	t_size_t	i;

	temp = ft_memset(temp, 0, len);
	c_dst = (char *) dst;
	c_src = (const char *) src;
	i = 0;
	while (i < len && c_src[i])
	{
		temp[i] = c_src[i];
		i++;
	}
	i = 0;
	while (i < len && c_dst[i])
	{
		c_dst[i] = temp[i];
		i++;
	}
	ft_bzero(temp, len);
	return (dst);
}
