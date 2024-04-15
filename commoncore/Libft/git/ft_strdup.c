/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguerrei <fguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 16:04:21 by filipemende       #+#    #+#             */
/*   Updated: 2024/04/15 15:36:39 by fguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char 
		*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char *ft_strdup(const char *s1)
{
	char *dest;
	size_t len;
	
	len = ft_strlen(s1);
	dest = malloc(sizeof(char) * (len + 1));

	if (dest == NULL)
		return (NULL);
	ft_strcpy(dest, s1);
	return (dest);
}