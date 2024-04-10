/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguerrei <fguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 10:56:19 by fguerrei          #+#    #+#             */
/*   Updated: 2024/03/11 11:00:33 by fguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp1;

	temp1 = *a;
	*a = *a / *b;
	*b = temp1 % *b;
}

/*int main()
{
  int c = 2;
  int d = 2;
  int *a = &c;
  int *b = &d;

  *a = 10;
  *b = 5;
  
  ft_ultimate_div_mod(a, b);
  printf("Divisao: %d\nResto: %d\n", c, d);
}*/
