/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguerrei <fguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:09:19 by fguerrei          #+#    #+#             */
/*   Updated: 2024/03/20 10:39:35 by fguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
	int i;
	int result;

	i = 1;
	result = 1;
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
	while(i <= power)
	{
		result = result * nb;
		i++;
	}
	return (result);
}

int main()
{
	printf("%d\n", ft_iterative_power(3,2));

	return 0;
}
