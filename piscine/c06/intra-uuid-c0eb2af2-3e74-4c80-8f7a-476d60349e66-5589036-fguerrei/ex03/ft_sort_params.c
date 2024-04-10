/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguerrei <fguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 15:44:23 by fguerrei          #+#    #+#             */
/*   Updated: 2024/03/18 16:45:19 by fguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] && str1[i] == str2[i])
	{
		i++;
	}
	return (str1[i] - str2[i]);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_arg(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc > 1)
	{
		j = 1;
		while (j < argc)
		{
			i = 0;
			while (argv[j][i])
			{
				ft_putchar(argv[j][i]);
				i++;
			}
			j++;
			ft_putchar('\n');
		}
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*empty;

	if (argc > 1)
	{
		j = 1;
		while (j < argc)
		{
			i = j;
			{
				while (ft_strcmp(argv[i], argv[i - 1]) < 0 && i > 1)
				{
					empty = argv[i - 1];
					argv[i - 1] = argv[i];
					argv[i] = empty;
					i--;
				}
				j++;
			}
		}
	}
	ft_arg(argc, argv);
	return (0);
}
