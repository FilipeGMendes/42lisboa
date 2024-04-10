/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguerrei <fguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 11:44:50 by fguerrei          #+#    #+#             */
/*   Updated: 2024/03/13 09:38:18 by fguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
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
 
    printf("%d\n", ft_str_is_lowercase(empty));
    printf("%d\n", ft_str_is_lowercase(upper));
    printf("%d\n", ft_str_is_lowercase(lower));
    printf("%d\n", ft_str_is_lowercase(mixed));

    return 0;
}*/
