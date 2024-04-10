/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguerrei <fguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 16:52:45 by fguerrei          #+#    #+#             */
/*   Updated: 2024/03/03 14:15:18 by fguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	top(int j, int c)
{
	ft_putchar('A');
	while (j < c)
	{
		ft_putchar('B');
		j++;
	}
	if (c > 1)
	{
		ft_putchar('C');
	}
	ft_putchar('\n');
}

void	bot(int j, int c)
{
	ft_putchar('C');
	while (j < c)
	{
		ft_putchar('B');
		j++;
	}
	if (c > 1)
	{
		ft_putchar('A');
	}
	ft_putchar('\n');
}

void	mid(int j, int c)
{
	ft_putchar('B');
	while (j < c)
	{
		ft_putchar(' ');
		j++;
	}
	if (c > 1)
	{
		ft_putchar('B');
	}
	ft_putchar('\n');
}

void	rush(int c, int l)
{
	int	i;
	int	j;

	j = 2;
	i = 1;
	while (i <= l)
	{
		if (i == 1)
		{
			top(j, c);
		}
		else if (i == l)
		{
			bot(j, c);
		}
		else
		{
			mid(j, c);
		}
		i++;
	}
}
