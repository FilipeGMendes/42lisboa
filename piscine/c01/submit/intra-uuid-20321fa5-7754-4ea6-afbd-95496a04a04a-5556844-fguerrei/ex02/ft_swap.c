/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguerrei <fguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 10:56:41 by fguerrei          #+#    #+#             */
/*   Updated: 2024/03/11 10:52:52 by fguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int*b)
{
	int	empty;

	empty = *a;
	*a = *b;
	*b = empty;
}

/*int main()
{
  int c = 100;
  int d = 6;
  int *a = &c;
  int *b = &d;

  *a = 10;
  *b = 5;
  
  ft_swap(a, b);
  printf("%d,%d\n",c,d);

  return 0;
}*/
