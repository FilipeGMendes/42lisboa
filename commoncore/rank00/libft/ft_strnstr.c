/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguerrei <fguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 10:36:54 by fguerrei          #+#    #+#             */
/*   Updated: 2024/05/21 14:31:04 by fguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	if (len > ft_strlen(haystack))
		len = ft_strlen(haystack);
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
	return (NULL);
}
/*int main()
{
	char *empty = "";
	printf("%s\n", ft_strnstr(empty, "coucou", -1));
}*/
/* this function works like strchr
	this one searches for a complete substring
	in max len characters
*/