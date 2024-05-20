/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguerrei <fguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 13:39:21 by fguerrei          #+#    #+#             */
/*   Updated: 2024/05/20 14:43:43 by fguerrei         ###   ########.fr       */
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
	size_t	i;
	size_t	start;
	size_t	end;

	start = 0;
	while (s[start] && ft_isset(s[start], set))
		start++;
	end = ft_strlen(s);
	while (end > start && ft_isset(s[end - 1], set))
		end--;
	trimmed = (char *)malloc(sizeof(*s) * (end - start + 1));
	if (!trimmed)
		return (NULL);
	i = 0;
	while (start < end)
		trimmed[i++] = s[start++];
	trimmed[i] = 0;
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