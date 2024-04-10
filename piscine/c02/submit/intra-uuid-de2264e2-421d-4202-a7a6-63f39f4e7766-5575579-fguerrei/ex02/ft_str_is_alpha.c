/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguerrei <fguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 11:44:50 by fguerrei          #+#    #+#             */
/*   Updated: 2024/03/14 16:52:04 by fguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' || str[i] >= 'A')
		{
			if (str[i] <= 'z' || str[i] <= 'Z')
			{
				i++;
			}
			else
			{
				return 0;
			}
		}
		else
		return(0);
	}
	return (1);
}

int main()
{
    char empty[] = "";
    char numb[] = "123";
    char alphabet[] = "Z}";
    char mixed[] = "aB123c";
 
    printf("%d\n", ft_str_is_alpha(empty));
    printf("%d\n", ft_str_is_alpha(numb));
    printf("%d\n", ft_str_is_alpha(alphabet));
    printf("%d\n", ft_str_is_alpha(mixed));

    return 0;
}
