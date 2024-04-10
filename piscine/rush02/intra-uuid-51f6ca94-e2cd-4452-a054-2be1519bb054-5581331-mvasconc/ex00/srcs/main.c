/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 18:13:13 by vsoares-          #+#    #+#             */
/*   Updated: 2024/03/17 21:27:25 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_custom.h"

int	main(int argc, char **argv)
{
	char	*number;
	char	*word;

	if (argc < 2 || argc > 3)
	{
		ft_putstr("Error\n");
		return (1);
	}
	if (argc == 2)
	{
		number = argv[1];
		read_dict(number);
	}
	else if (argc == 3)
	{
		number = argv[1];
		word = argv[2];
		write_dict(number, word);
	}
	return (0);
}

// Fazer condição para rejeitar números negativos.
// Remover todos os PRINTFs!!