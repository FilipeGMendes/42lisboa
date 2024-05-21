/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguerrei <fguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 10:33:33 by fguerrei          #+#    #+#             */
/*   Updated: 2024/05/21 14:42:12 by fguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t element_size)
{
	void	*ptr;
	size_t	size;

	size = count * element_size;
	if (size && element_size && size > (UINT_MAX / element_size))
		return (NULL);
	ptr = (void *)malloc(size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, size);
	return (ptr);
}
/*int main()
{
	int *ft_array;
    int *libc_array;
    int i;

    ft_array = ft_calloc(10, sizeof(int));
    libc_array = calloc(10, sizeof(int));

    if (ft_array == NULL || libc_array == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (i = 0; i < 10; i++)
        ft_array[i] = i + 1;

    for (i = 0; i < 10; i++)
        libc_array[i] = i + 1;

    for (i = 0; i < 10; i++)
    {
        if (ft_array[i]!= libc_array[i])
        {
            printf("ft_calloc and calloc produced different results\n");
            return 1;
        }
		printf("ft_array[%d] = %d\n", i, ft_array[i]);//just to be visual
		printf("libc_array[%d] = %d\n", i, libc_array[i]);//just to be visual
    }

    free(ft_array);
    free(libc_array);
    return 0;
}*/
/*	this function works in the same way as malloc
	calloc sets all the memory bytes are set to 0
*/
/*	malloc is used to dynamically allocate a single large block of memory
	with specified size
	returns a (void *)
	which can be cast into any a pointer of any form
*/