/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguerrei <fguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 12:23:54 by fguerrei          #+#    #+#             */
/*   Updated: 2024/03/20 14:27:23 by fguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb <= 1)
		return 0;
	else if (nb == 2)
		return (1);
	while(i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int main()
{
	printf("%d\n", ft_is_prime(22));
}