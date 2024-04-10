/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguerrei <fguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:54:23 by fguerrei          #+#    #+#             */
/*   Updated: 2024/03/19 15:08:25 by fguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if(nb == 1 || nb == 0)
		return(1);
	else if(nb < 0)
		return (0);
	return (nb * ft_recursive_factorial(nb - 1));
}

int main()
{
	printf("%d", ft_recursive_factorial(5));
}