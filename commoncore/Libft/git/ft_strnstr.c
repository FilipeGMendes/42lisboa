/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguerrei <fguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 12:23:07 by filipemende       #+#    #+#             */
/*   Updated: 2024/04/15 10:55:48 by fguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;

	i = 0;
    if(*needle == '\0')
        return ((char *)haystack);
	else
	{	
		while(i < len)
		{
			if(ft_strncmp((char *)&haystack[i],needle,ft_strlen(needle)) == 0)
			{
				if (i + ft_strlen(needle) > len)
					return (NULL);
				return ((char *)haystack + i);
			}
			i++;
		}
	}
	return (NULL);
}