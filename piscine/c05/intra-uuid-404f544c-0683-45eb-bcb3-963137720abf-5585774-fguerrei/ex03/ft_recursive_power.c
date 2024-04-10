/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguerrei <fguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 10:03:32 by fguerrei          #+#    #+#             */
/*   Updated: 2024/03/20 10:42:03 by fguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
	int result = 1;
	
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	if (power == 1)
	{
		return(nb);
	}
	if (power > 0)
	{
		result =  result * nb * ft_recursive_power(nb,--power);
	}
	return (result);
}

int main()
{
	printf("%d\n",ft_recursive_power(-5,2));
}