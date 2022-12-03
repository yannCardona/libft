/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycardona <ycardona@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 18:53:53 by ycardona          #+#    #+#             */
/*   Updated: 2022/12/03 19:02:20 by ycardona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_size_t	ft_strlcat(char *restrict dst, const char *restrict src,
t_size_t dstsize)
{
	t_size_t	i;
	t_size_t	len_dst;
	t_size_t	len_src;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	i = 0;
	while (src[i] != '\0' && i < dstsize - 1 && 0 < dstsize)
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	if (dstsize > len_dst)
		dst[len_dst + i] = '\0';
	if (dstsize < len_dst)
		return (len_src + dstsize);
	else
		return (len_src + len_dst);
}
