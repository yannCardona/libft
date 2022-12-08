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
	int		r;

	r = -1;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			r = i;
		i++;
	}
	if (c == '\0')
		return ((char *) &(s[i]));
	if (0 <= r && s[r] == c)
		return ((char *) &(s[r]));
	return (NULL);
}

/* int main(void)
{
	char s[] = "teste";
	printf("%p   |  %p\n", ft_strrchr(s, 'e'), strrchr(s, 'e'));
} */