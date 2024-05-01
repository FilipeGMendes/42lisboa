/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguerrei <fguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 11:09:17 by fguerrei          #+#    #+#             */
/*   Updated: 2024/04/30 10:47:58 by fguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*ptr;

	ptr = s;
	i = 0;
	while (n > 0)
	{
		ptr[i] = 0;
		i++;
		n--;
	}
}
/*int main()
{
    char str1[20] = "Hello, World!";
    char str2[20] = "Hello, World!";

    // Using ft_bzero
    ft_bzero(str1 + 7, 5); // Zero out 5 characters starting from index 7
    printf("ft_bzero result: %s\n", str1);

    // Using memset for comparison
    memset(str2 + 7, '\0', 5); // Zero out 5 characters starting from index 7
    printf("memset result: %s\n", str2);

    // Check if results match
    if (strcmp(str1, str2) == 0)
        printf("Results match!\n");
    else
        printf("Results don't match!\n");

    return 0;
}*/
//ft_bzero should work in the same way as memset
//the difference is with memset we need to specify that character to write
//with ft_bzero the character will always be 0;