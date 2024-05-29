/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printdigits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguerrei <fguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 13:55:18 by fguerrei          #+#    #+#             */
/*   Updated: 2024/05/29 18:39:04 by fguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printdigits(long numb, int base)
{
	int i;
	char *symbols;

	symbols	= "0123456789abcdef";
	if (numb < 0)
	{
		write(1, "-", 1);
		return (ft_printdigits(-numb, base) + 1);
	}
	else if (numb < base)
		return (ft_printchar(symbols[numb]));
	else
	{
		i = ft_printdigits(numb / base, base);
		return (i + ft_printdigits(numb % base, base));
	}
}