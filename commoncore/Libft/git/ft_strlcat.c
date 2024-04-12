/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguerrei <fguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 12:08:35 by fguerrei          #+#    #+#             */
/*   Updated: 2024/04/12 11:57:27 by fguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t d;
	size_t s;
	
	d = ft_strlen(dst);
	s = 0;
	if (size == 0 || size <= ft_strlen(dst))
		return (ft_strlen(src) + size);
	while (src[s] != '\0' && d < (size - 1))
	{
		dst[d] = src[s];
		d++;
		s++;
		
	}
	dst[d] = '\0';
	return (ft_strlen(src) + ft_strlen(dst));
}