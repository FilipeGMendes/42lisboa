/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguerrei <fguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 10:46:46 by fguerrei          #+#    #+#             */
/*   Updated: 2024/03/20 11:15:40 by fguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_fibonacci(int index)
{
	int	i;
	int result;

	i = 1;
	result = 0;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	if (i < index)
	{
		result = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	}
	return (result);
}

int main()
{	
	int result = ft_fibonacci(6);
	
	printf("%d\n", result);
}