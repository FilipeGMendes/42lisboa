/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguerrei <fguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 10:36:54 by fguerrei          #+#    #+#             */
/*   Updated: 2024/05/01 10:38:57 by fguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	else
	{
		while (i < len)
		{
			if (ft_strncmp((char *)&haystack[i], needle,
					ft_strlen(needle)) == 0)
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
/*int main()
{
	printf("%s\n", ft_strnstr("w o r l d", "World",9));
}*/
/* this function works like strchr
	this one searches for a complete substring
	in max len characters
*/