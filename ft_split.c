/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycardona <ycardona@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 17:38:37 by ycardona          #+#    #+#             */
/*   Updated: 2022/12/09 18:51:37 by ycardona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* static int	*ft_count(char const *s, char c)
{
	int	i;
	int	j;
	int	*tab;

	i = 0;
	tab = (int *) malloc(8);
	tab[0] = 0;
	tab[1] = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			j = 0;
			while (s[i + j] != c)
				j++;
			tab[0] += 1;
			if (tab[1] < j)
				tab[1] = j;
			i = i + j;
		}
		i++;
	}
	return (tab);
}
 */
static int	ft_wordcount(char const *s, char c)
{
	int		i;
	int		j;
	size_t	count;

	i = 0;
	count = 0; 
	while (s[i])
	{
		if (s[i] != c)
		{
			j = 0;
			while (s[i + j] != c)
				j++;
			count += 1;
			i = i + j;
		}
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	//int		*count;
	char	**split;
	int		i;
	size_t		j;
	int		k;

	//count = ft_count(s, c);
	*split = (char *) malloc(ft_wordcount(s, c));
	if (split == NULL)
		return (NULL);
	k = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			j = 0; 
			while (s[i + j] == c)
				j++;
			split[k] = ft_substr(s, i, j);
			k++;
		}
		i++;
	}
	return (split);
}

int	main(void)
{
	char	**tab;
	int	i = 0;
	
	tab = ft_split(" 1 22 333   4444    5 ", ' ');
	printf("%s\n", tab[1]);
}