/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguerrei <fguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 12:29:33 by fguerrei          #+#    #+#             */
/*   Updated: 2024/05/22 17:41:31 by fguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int		ft_printf(const char *format, ...);

int		ft_printchar(int c);
int		ft_printstr(char *str);

int		ft_printptr(unsigned long long ptr);

int		ft_printdigits(long numb, int base);
int		ft_printupperdigits(long numb, int base);

#endif