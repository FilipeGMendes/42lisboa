/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filipemendes <filipemendes@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:24:21 by fguerrei          #+#    #+#             */
/*   Updated: 2024/04/28 20:27:20 by filipemende      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len;
	size_t	i;
	size_t	j;

	i = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	str = ft_calloc(sizeof(char) ,len + 1);
	j = 0;
	while (i < ft_strlen(s1))
	{
		str[i] = s1[j];
		i++;
		j++;
	}
	j = 0;
	while (i < len)
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	if (str == NULL)
		return (NULL);
	return (str);
}
