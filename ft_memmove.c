/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycardona <ycardona@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 18:00:11 by ycardona          #+#    #+#             */
/*   Updated: 2022/12/07 13:40:46 by ycardona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	temp[len];

	if (!(dst || src))
		return (NULL);
	ft_memcpy(temp, src, len);
	ft_memcpy(dst, temp, len);
	return (dst);
}

// int	main(void)
// {
// 	char	dst1[] = "abcde";
// 	char	dst2[] = "abcde";
// 	memcpy(dst1 + 2, dst1, 3);
// 	memmove(dst2 + 2, dst2, 3);
// 	printf("memcpy: %s\n", dst1);
// 	printf("memmove: %s\n", dst2);
// }
// #include <string.h>
// #include <stdio.h>
// #define SIZE    21
// char target[SIZE] = "a shiny white sphere";
// int main( void )
// {
//   char * p = target + 8;  /* p points at the starting character
//                           of the word we want to replace */
//   char * source = target + 2; /* start of "shiny" */
//   printf( "Before memmove, target is \"%s\"\n", target );
//   memcpy( p, source, 5 );
//   printf( "After memmove, target becomes \"%s\"\n", target );
// }