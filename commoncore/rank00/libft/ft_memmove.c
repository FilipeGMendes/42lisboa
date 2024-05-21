/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguerrei <fguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:39:15 by fguerrei          #+#    #+#             */
/*   Updated: 2024/05/21 14:39:37 by fguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	if (!d && !s)
		return (NULL);
	if (d > s)
	{
		while (n > 0)
		{
			n--;
			d[n] = s[n];
		}
	}
	else
	{
		ft_memcpy(d, s, n);
	}
	return (dest);
}
/*int	main(void)
{
	char    src[] = "12345";
    char    dest[50] = "12345";
    
    memmove(dest + 5, src + 3, 11);
	printf("memmove result: %s\n", dest);

	ft_memmove(dest + 5, src + 3, 11);
	printf("ft_memmove result: %s\n", dest);
	return (0);
}*/
/*	the function does the same as the memcpy,
	but the copy is made in a non destructive manner
	both strings cna overlap
	and the function does not overwrite part of or entirely
 	it first copies the bytes to be copied into a temporary array
	then pastes them into the destination
 	memcpy copies directly from the source to the destination
*/