/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguerrei <fguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 10:35:08 by fguerrei          #+#    #+#             */
/*   Updated: 2024/04/30 12:32:33 by fguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	chr;
	char	*str;

	str = (char *)s;
	chr = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == chr)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
/*int main() {
    const char str[] = "ABCDEFG";
    const char *result;

    // Search for the character 'D' in the string
    result = ft_memchr(str, 'D', 5);

    printf("%s\n", result);

    if (result != NULL) {
        printf("Character 'D' found at position %ld\n", result - str + 1);
    } else {
        printf("Character 'D' not found\n");
    }

    return 0;
}*/
//the function works similarly as strchr
//the difference is
//memchr works with byte string (void *)
//strchr works with literal strings (char *)
//memchr also has a third parameter
//it tells the function how many bytes we want to search in