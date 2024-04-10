/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguerrei <fguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:39:15 by fguerrei          #+#    #+#             */
/*   Updated: 2024/04/10 14:35:09 by fguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;

	if (!dest && !src)
		return 0;
	
	i = 0;
	if ((size_t)dest - (size_t)src < n)
	{
		i = n - 1;
		while (i < n)
		{
			((unsigned char*) dest)[i] = ((unsigned char*) src)[i];
			i--;
		}
	}
	else
	{
		while (i < n)
		{
			((unsigned char*) dest)[i] = ((unsigned char*) src)[i];
			i++;
		}
	}
	return (dest);
}