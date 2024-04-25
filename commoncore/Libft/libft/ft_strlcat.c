/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filipemendes <filipemendes@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 12:08:35 by fguerrei          #+#    #+#             */
/*   Updated: 2024/04/25 16:56:04 by filipemende      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t    src_len;
    size_t    dst_len;
    src_len = ft_strlen(src);
    dst_len = ft_strlen(dst);
    if (dst_len >= dstsize)
        dst_len = dstsize;
    if (dst_len == dstsize)
        return (dstsize + src_len);
    if (src_len < dstsize - dst_len)
        ft_memcpy(dst + dst_len, src, src_len + 1);
    else
    {
        ft_memcpy(dst + dst_len, src, dstsize - dst_len - 1);
        dst[dstsize - 1] = '\0';
    }
    return (dst_len + src_len);
}*/
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
