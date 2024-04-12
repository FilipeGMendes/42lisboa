/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguerrei <fguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 14:19:56 by fguerrei          #+#    #+#             */
/*   Updated: 2024/04/12 14:51:57 by fguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <unistd.h>
# include <string.h>

int		ft_isalpha(int c);
int 	ft_isdigit(int c);
int 	ft_isalnum(int c);
int 	ft_isascii(int c);
int 	ft_isprint(int c);
int 	ft_isspace(int c);

size_t	ft_strlen(const char *str);
size_t 	ft_strlcpy(char *dst, const char *src, size_t size);
size_t 	ft_strlcat(char *dst, const char *src, size_t size);
char 	*ft_strchr(const char *s, int c);
char 	*ft_strrchr(const char *s, int c);

void 	*ft_memset(void *s, int c, size_t n);
void 	ft_bzero(void *s, size_t n);
void 	*ft_memcpy(void *dest, const void *src, size_t n);
void 	*ft_memmove(void *dest, const void *src, size_t n);

int 	ft_toupper(int c);
int 	ft_tolower(int c);
int 	ft_atoi(const char *str);

#endif