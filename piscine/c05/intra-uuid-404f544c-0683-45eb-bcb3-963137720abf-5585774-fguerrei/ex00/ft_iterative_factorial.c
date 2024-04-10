/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguerrei <fguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 09:56:53 by fguerrei          #+#    #+#             */
/*   Updated: 2024/03/19 14:58:40 by fguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int result;

	i = 1;
	result = 1;
	if (nb < 0)
		return (0);
	while(nb >= i)
	{
		result = result * i;
		i++;
	}
	return (result);
}

int main()
{
	printf("%d",ft_iterative_factorial(5));
}