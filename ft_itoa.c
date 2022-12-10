/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycardona <ycardona@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 09:25:18 by ycardona          #+#    #+#             */
/*   Updated: 2022/12/10 11:10:37 by ycardona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_digits(int n)
{
	size_t	i;

	if (n == -2147483648)
		return (11);
	i = 1;
	if (n < 0)
	{
		n = -1 * n;
		i++;
	}
	while (9 < n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	size_t	len;
	size_t	start;
	char	*num;

	start = 0;
	len = ft_digits(n);
	num = ft_calloc(len + 1, 1);
	printf("%s", num);
	if (num == NULL)
		return (NULL);
	if (n == -2147483648)
		return (num = "-2147483648");
	if (n < 0)
	{
		n = -1 * n;
		num[0] = '-';
		start = 1;
	}
	while (start < len)
	{
		num[len - 1] = (n % 10) + 48;
		n = n / 10;
		len--;
	}
	return (num);
}

/* int	main(void)
{
	printf("%s", ft_itoa(-2147483648));
} */