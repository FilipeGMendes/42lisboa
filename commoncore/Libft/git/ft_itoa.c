/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filipemendes <filipemendes@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 17:48:48 by filipemende       #+#    #+#             */
/*   Updated: 2024/04/16 18:17:36 by filipemende      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char *str;

	str = malloc(sizeof(char) * 12);
	if (n == -2147483648)
	{
		str[0] = "-";
		str[1] = "2";
		n = 147483648;
	}
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	if (n < 10)
		return (str);
	if (n > 10)
		ft_itoa(n / 10);
	str[ft_strlen(str)] = n % 10 + '0';
	return (str);
}