/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguerrei <fguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 11:44:50 by fguerrei          #+#    #+#             */
/*   Updated: 2024/03/13 09:38:49 by fguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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
    char upper[] = "ABC";
    char lower[] = "abc";
    char mixed[] = "aB123c";
 
    printf("%d\n", ft_str_is_uppercase(empty));
    printf("%d\n", ft_str_is_uppercase(upper));
    printf("%d\n", ft_str_is_uppercase(lower));
    printf("%d\n", ft_str_is_uppercase(mixed));

    return 0;
}*/
