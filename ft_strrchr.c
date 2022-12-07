/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycardona <ycardona@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:29:47 by ycardona          #+#    #+#             */
/*   Updated: 2022/12/07 15:29:03 by ycardona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*r;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			r = (char *) &(s[i]);
		i++;
	}
	if (c == '\0')
		return ((char *) &(s[i]));
	if (*r == c)
		return (r);
	return (NULL);
}
