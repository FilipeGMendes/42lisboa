/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguerrei <fguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:10:33 by fguerrei          #+#    #+#             */
/*   Updated: 2024/04/10 12:27:25 by fguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	char *d = dest;
	const char *s = src;
	
	while (n > 0)
	{
		*d++ = *s++;
		n--;
	}
	return (dest);
}