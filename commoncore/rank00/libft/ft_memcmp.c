/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguerrei <fguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 10:35:15 by fguerrei          #+#    #+#             */
/*   Updated: 2024/04/30 12:33:14 by fguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	int		cmp;

	if (n == 0)
		return (0);
	i = 0;
	cmp = 0;
	while (i < n)
	{
		if (*(const unsigned char *)s1 != *(const unsigned char *)s2)
		{
			cmp = (*(const unsigned char *)s1) - (*(const unsigned char *)s2);
			break ;
		}
		s1++;
		s2++;
		i++;
	}
	return (cmp);
}
