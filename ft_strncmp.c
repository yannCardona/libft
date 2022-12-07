/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycardona <ycardona@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:31:03 by ycardona          #+#    #+#             */
/*   Updated: 2022/12/07 16:52:38 by ycardona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (!s1[i] && s2[i])
		return (-(unsigned char) s2[i]);
	if (s1[i] && !s2[i])
		return ((unsigned char) s1[i]);
	return (0);
}

// int	main(void)
// {
// 	char *s1 = "\xff";
// 	char *s2 = "\x02";
// 	size_t size = 6;
// 	//int i1 = ((strncmp(s1, s2, size) > 0) ? 1 : ((strncmp(s1, s2, size) < 0) ? -1 : 0));
// 	//int i2 = ((ft_strncmp(s1, s2, size) > 0) ? 1 : ((ft_strncmp(s1, s2, size) < 0) ? -1 : 0));
// 	printf("%i\n", s2);
// 	printf("%i\n", s1);
// 	printf("%i\n", strncmp(s1, s2, size));
// 	printf("%i\n", ft_strncmp(s1, s2, size));
// }