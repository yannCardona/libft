/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycardona <ycardona@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 17:38:37 by ycardona          #+#    #+#             */
/*   Updated: 2022/12/13 13:58:27 by ycardona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			j = 0;
			while (s[i + j] != c && s[i + j])
				j++;
			count++;
			i = i + j - 1;
		}
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		i;
	size_t	j;
	int		k;

	split = ft_calloc((ft_count(s, c) + 1) * sizeof(char *), 1);
	if (split == NULL)
		return (NULL);
	k = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			j = 0;
			while (s[(i + j)] != c && s[(i + j)])
				j++;
			split[k] = ft_substr(s, i, j);
			k++;
			i = i + j - 1;
		}
		i++;
	}
	split[k] = '\0';
	return (split);
}

/* int	main(void)
{
	char	**tab;
	int	i = 0;
	
	//printf("%zu\n", ft_count(" ahhaha ksl iiii", ' '));
	tab = ft_split(" jaohid kak la;d l", ' ');
	//printf("%s", tab[3]);
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
} */