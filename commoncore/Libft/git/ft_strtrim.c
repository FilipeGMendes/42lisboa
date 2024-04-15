/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filipemendes <filipemendes@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 13:39:21 by fguerrei          #+#    #+#             */
/*   Updated: 2024/04/15 20:27:28 by filipemende      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int 
		ft_isset(char c, char const *set)
{
	int i;

	i = 0;
	while(set[i])
	{
		if(set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s, char const *set)
{
	char *trimmed;
	char *start;
	char *end;
	
	start = (char *)s;
	end = (char *)s + ft_strlen(s) - 1;
	
	if (!s || !*s)
		return (NULL);
	while (ft_isset(*start, set))
		start++;
	while (end > start && ft_isset(*end, set))
		end--;
	if (start >= end)
		return ft_strdup("");
	trimmed = malloc(sizeof(char) * (end - start + 1));
	ft_memcpy(trimmed, start, end - start + 1);
	trimmed[end - start + 1] = '\0';
	return (trimmed);
}