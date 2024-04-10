/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguerrei <fguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 11:44:50 by fguerrei          #+#    #+#             */
/*   Updated: 2024/03/13 09:37:02 by fguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
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

/*int main()
{
    char empty[] = "";
    char numb[] = "123";
    char alphabet[] = "aBc";
    char mixed[] = "aB123c";
 
    printf("%d\n", ft_str_is_numeric(empty));
    printf("%d\n", ft_str_is_numeric(numb));
    printf("%d\n", ft_str_is_numeric(alphabet));
    printf("%d\n", ft_str_is_numeric(mixed));

    return 0;
}*/
