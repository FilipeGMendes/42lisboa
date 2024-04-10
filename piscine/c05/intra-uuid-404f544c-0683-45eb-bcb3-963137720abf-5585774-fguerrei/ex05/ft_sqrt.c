/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguerrei <fguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 11:30:57 by fguerrei          #+#    #+#             */
/*   Updated: 2024/03/20 12:21:15 by fguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_sqrt(int nb)
{
	int n;
	
	n = 2;
	if(nb < 0)
	{
		return 0;
	}
	while(n * n <= nb)
	{
		if(n * n == nb)
		{
			return (n);
		}
	n++;
	}
	return (0);
}

int main()
{
	printf("%d\n", ft_sqrt(25));
}
