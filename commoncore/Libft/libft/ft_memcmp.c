/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filipemendes <filipemendes@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 12:04:39 by filipemende       #+#    #+#             */
/*   Updated: 2024/04/25 15:45:55 by filipemende      ###   ########.fr       */
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
		if (*(const unsigned char *)s1!= *(const unsigned char *)s2)
		{
			cmp = (*(const unsigned char *)s1) - (*(const unsigned char *)s2);
			break;
		}
		s1++;
		s2++;
		i++;
	}

	return (cmp);
}
/*int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	int		cmp;
	char	*str1;
	char	*str2;

	str1 = (char *)s1;
	str2 = (char *)s2;
	i = 0;
	while (str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0' && i < n)
		i++;
	if (i == n)
		return (0);
	cmp = str1[i] - str2[i];
	if (cmp > 0)
		return (1);
	if (cmp < 0)
		return (-1);
	return (0);
}*/
