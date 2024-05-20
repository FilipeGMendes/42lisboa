/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguerrei <fguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 10:35:21 by fguerrei          #+#    #+#             */
/*   Updated: 2024/05/20 12:12:25 by fguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char   *d;
	unsigned char   *s;

    if (!dest && !src)
        return (NULL);
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	while (n > 0)
	{
		*d++ = *s++;
		n--;
	}
	return (dest);
}
/*int main(void)
{
    char src[50] = "Hello, World!";
    char dst[50];
    char dst2[50];
    size_t n = 10;
    // Test with overlapping memory regions
    memcpy(dst, src, n);
    ft_memcpy(dst2, src, n);
    printf("Original string: %s\n", src);
    printf("memcpy result: %s\n", dst);
    printf("ft_memcpy result: %s\n", dst2);
    // Test with non-overlapping memory regions
    memcpy(dst, src + n, n);
    ft_memcpy(dst2, src + n, n);
    printf("Original string: %s\n", src);
    printf("memcpy result: %s\n", dst);
    printf("ft_memcpy result: %s\n", dst2);
    return (0);
}*/
// the function copies a maximum of n bytes
// it works like strcpy
// but accepts (void *) as parameter, (accepts any type of pointer)