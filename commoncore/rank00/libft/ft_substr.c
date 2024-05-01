/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguerrei <fguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 10:37:03 by fguerrei          #+#    #+#             */
/*   Updated: 2024/05/01 10:48:46 by fguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*subs;

	if (!s)
		return (NULL);
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	subs = ft_calloc(sizeof(char), len + 1);
	if (!subs)
		return (NULL);
	i = 0;
	while (i < len)
	{
		subs[i] = s[start + i];
		i++;
	}
	return (subs);
}
/*int main()
{
    char *str1 = "Hello, world!";
    char *subs1 = ft_substr(str1, 7, 5);

    printf("orignal :%s", str1);
    printf("substring :%s", subs1);
}*/
/*	this function returns a substring
	with size len
	of the string s passed as parameter
*/