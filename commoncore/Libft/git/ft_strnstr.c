/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filipemendes <filipemendes@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 12:23:07 by filipemende       #+#    #+#             */
/*   Updated: 2024/04/13 12:50:37 by filipemende      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;
	char *str;

	str = (char *)haystack;
	i = 0;
	j = 0;
	if (needle[0] == '\0')
		return (str);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && haystack[i + j] && j < len)
		{
			if (needle[j + 1] == '\0')
				return (&str[i - j]);
			i++;
			j++;
		}
		i++;
	}
	return (NULL);
}