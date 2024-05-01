/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguerrei <fguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 13:39:21 by fguerrei          #+#    #+#             */
/*   Updated: 2024/05/01 10:58:06 by fguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s, char const *set)
{
	char	*trimmed;
	char	*start;
	char	*end;

	start = (char *)s;
	end = (char *)s + ft_strlen(s) - 1;
	if (!s || !set)
		return (NULL);
	while (ft_isset(*start, set))
		start++;
	while (end > start && ft_isset(*end, set))
		end--;
	if (start > end)
		return (ft_strdup(""));
	trimmed = ft_calloc(sizeof(char), (end - start + 2));
	ft_memcpy(trimmed, start, end - start + 2);
	trimmed[end - start + 1] = '\0';
	return (trimmed);
}
/*int main()
{
	char *str = "  lwatch this be trimmedl  "
	char *trimmed;
	
	trimmed = ft_strtrim(str, " l")
	
	printf("before: %s\nafter: %s\n", str, trimmed);
	return	0
}*/
/*	this function trims a string
	it removes the characters specified in the set string
	from the start and the end of the string s
	without removing the set characters from the middle of s
*/