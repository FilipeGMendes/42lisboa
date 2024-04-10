/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguerrei <fguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 12:45:27 by fguerrei          #+#    #+#             */
/*   Updated: 2024/03/19 09:40:24 by fguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[j + i] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (str + i);
			j++;
		}
		i++;
	}
	return (0);
}

/*int main()
{
	char x[] = "Hello, Word for World!";
	char y[] = "Word";
	char *result = ft_strstr(x, y);
	
	if (result != NULL)
	{
		printf("Substring encontrada em '%s' na posição: %s\n", x, result);
	}
	else
	{
		printf("Substring não encontrada em '%s'\n", x);
	}
	return 0;
}*/
