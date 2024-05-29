/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguerrei <fguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 10:32:57 by fguerrei          #+#    #+#             */
/*   Updated: 2024/05/29 19:00:21 by fguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_format(char specifier, va_list ap)
{
	int	i;

	i = 0;
	if (specifier == 'c')
		i += ft_printchar(va_arg(ap, int));
	else if (specifier == 's')
		i += ft_printstr(va_arg(ap, char *));
	else if (specifier == 'p')
		i += ft_printptr(va_arg(ap, unsigned long long));
	else if (specifier == 'u')
		i += ft_printunsigned(va_arg(ap, unsigned int));
	else if (specifier == 'd' || specifier == 'i')
		i += ft_printdigits((long)(va_arg(ap, int)), 10);
	else if (specifier == 'x')
		i += ft_printdigits((long)(va_arg(ap, unsigned int)), 16);
	else if (specifier == 'X')
		i += ft_printupperdigits((long)(va_arg(ap, unsigned int)), 16);
	else
		i += write(1, &specifier, 1);
	return (i);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	long int i;
	
	i = 0;
	if (!format)
		return (-1);
	va_start(ap, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if(!format)
				return (i);
			i += check_format(*format, ap);
		}
		else
			i += ft_printchar(*format);
		format++;
	}
	return (i);
	va_end(ap);
}

/*int main()
{
	ft_printf(" %c %c %c \n", '0', 0, '1');
	printf(" %c %c %c \n", '0', 0, '1');
}*/
