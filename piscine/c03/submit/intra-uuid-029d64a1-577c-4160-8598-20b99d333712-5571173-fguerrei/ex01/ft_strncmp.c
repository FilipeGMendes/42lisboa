/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguerrei <fguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 11:20:21 by fguerrei          #+#    #+#             */
/*   Updated: 2024/03/19 09:17:50 by fguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n == 0)
	{
		return (0);
	}
	while (*s1 == *s2 && --n && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/*int main()
{
    char str1[] = "abc";
    char str2[] = "abd";

    printf("%d\n", ft_strncmp(str1, str2, 3));

    return 0;
}*/

/*int main()
{
    printf("%d\n", ft_strncmp("banana", "banan", 2));
    printf("%d\n", ft_strncmp("42 Lisboa", "Lisboa", 8));
    printf("%d\n", ft_strncmp("Hello", "Helicoptero", 4));
    printf("%d\n", ft_strncmp("Hello", "Hello", 2));
    printf("%d\n", ft_strncmp("","", 2));
    return 0;
}*/
