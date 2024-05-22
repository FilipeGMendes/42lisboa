/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguerrei <fguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 10:32:57 by fguerrei          #+#    #+#             */
/*   Updated: 2024/05/22 17:42:52 by fguerrei         ###   ########.fr       */
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
	
	va_start(ap, format);
	i = 0;
	while (*format)
	{
		if (*format == '%')
			i += check_format(*(++format), ap);
		else
			i += write(1, format, 1);
		format++;
	}
	va_end(ap);
	return (i);
}

/*int main()
{
	int	i;

	i = ft_printf("%x\n", 42);
	ft_printf("Number of chars is %d\n", i);
	i = printf("%x\n", 42);
	printf("Number of chars is %d\n", i);
}*/
