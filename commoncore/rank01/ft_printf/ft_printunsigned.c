/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguerrei <fguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 23:05:35 by fguerrei          #+#    #+#             */
/*   Updated: 2024/05/23 23:38:19 by fguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_numlen(unsigned int num)
{
	int i;

	i = 0;
	while (num != 0)
	{
		i++;
		num = num / 10;	
	}
	return (i);
}

char *ft_uitoa(unsigned int num)
{
	char	*str;
	int		len;

	len = ft_numlen(num);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	str[len] = '\0';
	while (num != 0)
	{
		str[len - 1] = num % 10 + 48;
		num = num / 10;
		len--;
	}
	return (str);
}

int ft_printunsigned(unsigned int num)
{
	int 	i;
	char 	*n;

	i = 0;
	if (num == 0)
		i += write(1, "0", 1);
	else
	{
		n = ft_uitoa(num);
		i += ft_printstr(n);
		free(n);
	}
	return (i);
}