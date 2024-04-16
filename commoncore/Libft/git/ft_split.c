/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguerrei <fguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:28:50 by fguerrei          #+#    #+#             */
/*   Updated: 2024/04/16 13:37:57 by fguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_countwords(char const *s, char c)
{
	int i;
	int trigger;
	int count;

	i = 0;
	trigger = 0;
	count = 0;
	while (s[i])
	{
		if(s[i] != c && trigger == 0)
		{
			trigger = 1;
			count++;
		}
		else if(s[i] == c)
			trigger = 0;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char **result;
	size_t i;
	size_t j;

	i = 0;
	result = (char **)malloc(sizeof(char *) * (ft_countwords(s, c)+ 1));
	if (!result)
		return (NULL);
	while(*s)
	{
		while (*s && *s == c)
			s++;
		if(*s)
		{	
			if (!ft_strchr(s, c))
				j = ft_strlen(s);
			else
				j = ft_strchr(s, c) - s;
			result[i] = ft_substr(s, 0, j);
			s += j;
			i++;
		}
	}
	result[i] = NULL;
	return (result);
}