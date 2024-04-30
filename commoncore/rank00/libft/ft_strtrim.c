/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguerrei <fguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 13:39:21 by fguerrei          #+#    #+#             */
/*   Updated: 2024/04/30 10:37:17 by fguerrei         ###   ########.fr       */
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
