/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_custom.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 18:13:11 by vsoares-          #+#    #+#             */
/*   Updated: 2024/03/17 21:37:51 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CUSTOM_H
# define FT_CUSTOM_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>

void	read_dict(char *number);
void	write_dict(char *number, char *word);

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);

int		ft_strcmp(char *s1, char *s2);
char	*ft_strcpy(char *dest, char *src);
int		ft_atoi(char *str);

#endif