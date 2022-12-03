/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycardona <ycardona@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 17:02:07 by ycardona          #+#    #+#             */
/*   Updated: 2022/12/03 19:01:53 by ycardona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

//# include <ctype.h>
# include <stdio.h>
# include <string.h>

typedef unsigned int	t_size_t;

int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
t_size_t	ft_strlen(const char *s);
void		*ft_memset(void *b, int c, t_size_t len);
void		ft_bzero(void *s, t_size_t n);
void		*ft_memcpy(void *restrict dst, const void *restrict src,
				t_size_t n);
void		*ft_memmove(void *dst, const void *src, size_t len);
t_size_t	ft_strlcpy(char *restrict dst, const char *restrict src,
				t_size_t dstsize);
t_size_t	ft_strlcat(char *restrict dst, const char *restrict src,
				t_size_t dstsize);

#endif