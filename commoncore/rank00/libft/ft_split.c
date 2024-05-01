/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguerrei <fguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:28:50 by fguerrei          #+#    #+#             */
/*   Updated: 2024/05/01 11:06:08 by fguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(char const *s, char c)
{
	int	i;
	int	trigger;
	int	count;

	i = 0;
	trigger = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && trigger == 0)
		{
			trigger = 1;
			count++;
		}
		else if (s[i] == c)
			trigger = 0;
		i++;
	}
	return (count);
}

char	*findchr(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] == c)
		i++;
	return (&s[i]);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	result = (char **)malloc(sizeof(char *) * (ft_countwords(s, c) + 1));
	if (!result)
		return (NULL);
	while (*s)
	{
		s = findchr((char *)s, c);
		if (*s)
		{
			if (!ft_strchr(s, c))
				j = ft_strlen(s);
			else
				j = ft_strchr(s, c) - (char *)s;
			result[i] = ft_substr(s, 0, j);
			s += j;
			i++;
		}
	}
	result[i] = NULL;
	return (result);
}
/*int main(void)
{
	char *str = "Hello I am here";
	char **split = ft_split(str, ' ');
	if (split)
	{
		for (int i = 0; split[i]; i++)
			printf("%s\n", split[i]);
	}
	else
	{
		printf("Split failed\n");
	}
	return 0;
}*/
/*	this function takes a string s and splits it
	to get an array containing each words of it
	each word is separated by one or more c
	c is the word delimiter
	the words array must be NUL-terminated
*/