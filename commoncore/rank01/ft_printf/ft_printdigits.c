/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printdigits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguerrei <fguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 13:55:18 by fguerrei          #+#    #+#             */
/*   Updated: 2024/05/03 14:06:52 by fguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printdigits(int digits, size_t n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		ft_itoa(digits);
		i++;
		n--;
	}
	return (i);
}