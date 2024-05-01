/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguerrei <fguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 10:36:11 by fguerrei          #+#    #+#             */
/*   Updated: 2024/05/01 10:47:36 by fguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(const char *s1)
{
	char	*dest;
	size_t	len;

	len = ft_strlen(s1);
	dest = malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (NULL);
	ft_strcpy(dest, (char *)s1);
	return (dest);
}
/*int main()
{
    char *str1 = "Hello, world!";
    char *str2 = strdup(str1);
    char *str3 = ft_strdup(str1);

    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    printf("str3: %s\n", str3);

    if (strcmp(str2, str3) == 0)
    {
        printf("The two strings are the same.\n");
    }
    else
    {
        printf("The two strings are different.\n");
    }

    free(str2);
    free(str3);

    return 0;
}*/
/*	this function returns a (char *)
	which is a duplicate of the string s1
	the memory of the new string is obtained
	with malloc
*/