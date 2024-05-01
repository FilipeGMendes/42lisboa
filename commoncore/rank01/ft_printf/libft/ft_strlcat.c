/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguerrei <filipe0505mendes@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 12:08:35 by fguerrei          #+#    #+#             */
/*   Updated: 2024/05/01 13:49:03 by fguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d;
	size_t	src_len;

	d = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (d >= size)
		d = size;
	if (d == size)
		return (src_len + size);
	if (src_len < size - d)
		ft_memcpy(dst + d, src, src_len + 1);
	else
	{
		ft_memcpy(dst + d, src, size - d - 1);
		dst[size - 1] = '\0';
	}
	return (src_len + d);
}
/*int main()
{
	char dest[11] = 'a';
	
	printf("%zu\n", ft_strlcat(dest, "lorem", 15));
}*/
/*	this function concatenate two strings and it always null terminate the string
	if size is long enough, it simply concatenates the two string
	if size is not long enough, 
	it concatenates size - strlen(dest) - 1 characters, adding the NULL character
*/