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
	size_t			i;
	unsigned char	*u_s1;
	unsigned char	*u_s2;

	u_s1 = (unsigned char *) s1;
	u_s2 = (unsigned char *) s2;
	if (n == 0)
		return (0);
	i = 0;
	while (i < n && (u_s1[i] || u_s2[i]))
	{
		if (u_s1[i] != u_s2[i])
			return (u_s1[i] - u_s2[i]);
		i++;
	}
	if (u_s1[i] && !u_s2[i] && i < n)
		return (u_s1[i]);
	if (!u_s1[i] && u_s2[i] && i < n)
		return (-u_s2[i]);
	return (0);
}

/* int	main(void)
{
	int i1 = '\xff';
	int i2 = '\0';
	char *s1 = "\xff";
 	char *s2 = "\x02";
 	size_t size = 6;
	printf("%i\n", i1);
	printf("%i\n", i2);
	printf("%i\n", strncmp(s1, s2, size));
	printf("%i\n", ft_strncmp(s1, s2, size));
} */