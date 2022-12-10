/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycardona <ycardona@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 17:38:37 by ycardona          #+#    #+#             */
/*   Updated: 2022/12/10 09:24:10 by ycardona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	*ft_count(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	*tab;

	i = 0;
	tab = (size_t *) malloc(8);
	if (tab == NULL)
		return (NULL);
	tab[0] = 0;
	tab[1] = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			j = 0;
			while (s[i + j] != c && s[i + j])
				j++;
			tab[0] += 1;
			if (tab[1] < j)
				tab[1] = j;
			i = i + j - 1;
		}
		i++;
	}
	return (tab);
}

static char	**ft_2d_calloc(char const *s, char c)
{
	char	**mat;
	size_t	*count;
	size_t	i;

	count = ft_count(s, c);
	if (count == NULL)
		return (NULL);
	mat = malloc((count[0] + 1) * 8);
	if (mat == NULL)
		return (NULL);
	mat = ft_memset(mat, 0, count[0] + 1);
	i = 0;
	while (i < count[0])
	{
		mat[i] = malloc((count[1] + 1) * 8);
		if (mat == NULL)
			return (NULL);
		mat[i] = ft_memset(mat[i], 0, count[1] + 1);
		i++;
	}
	free(count);
	return (mat);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		i;
	int		j;
	int		k;

	split = ft_2d_calloc(s, c);
	if (split == NULL)
		return (NULL);
	k = 0;
	i = -1;
	while (s[++i])
	{
		if (s[i] != c)
		{
			j = 0;
			while (s[(i + j)] != c && s[(i + j)])
			{
				split[k][j] = s[i + j];
				j++;
			}
			k++;
			i = i + j - 1;
		}
	}
	return (split);
}

/* int	main(void)
{
	char	**tab;
	int	i = 0;
	
	tab = ft_split("  tripouille  43 oooo", ' ');
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
} */