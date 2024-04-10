/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguerrei <fguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 11:44:50 by fguerrei          #+#    #+#             */
/*   Updated: 2024/03/19 12:08:48 by fguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

int main()
{
    char empty[] = "";
    char alphabet[] = "Abc";
    char nonprint[] = "a\t";
    char mixed[] = "aB1  23c";
 
    printf("%d\n", ft_str_is_printable(empty));
    printf("%d\n", ft_str_is_printable(alphabet));
    printf("%d\n", ft_str_is_printable(nonprint));
    printf("%d\n", ft_str_is_printable(mixed));

    return 0;
}
