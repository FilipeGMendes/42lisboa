/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguerrei <fguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:24:21 by fguerrei          #+#    #+#             */
/*   Updated: 2024/05/20 14:34:42 by fguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	j = 0;
	if (!str)
		return (NULL);
	while (s1[i])
		str[j++] = s1[i++];
	i = 0;
	while (s2[i])
		str[j++] = s2[i++];
	str[j] = 0;
	return (str);
}
/*int main()
{
    char *s1 = "Hello ";
    char *s2 = "world!";

    printf("%s",ft_strjoin(s1, s2));
}*/
/*	this function works in the same way as strlcat
	instead of passing it a destinaion string
	that has to be correctly allocated as a parameter
	we only pass two strings
	ft_strjoin will allocate the required memory for both of them
	plus the NUL-terminating character
	s1 is the first string in result
	s2 is the second one
*/