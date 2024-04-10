/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguerrei <fguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 10:53:58 by fguerrei          #+#    #+#             */
/*   Updated: 2024/03/11 10:53:59 by fguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
}

/*int main()
{
  int c = 2;
  int d = 2;
  int *div = &c;
  int *mod = &d;
  int a = 10;
  int b = 5;

  ft_div_mod(a,b,div,mod);
  printf("Divisao: %d\n", c);
  printf("Resto: %d\n", d);

  return 0;
}*/
