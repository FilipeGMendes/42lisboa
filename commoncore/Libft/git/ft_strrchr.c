/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filipemendes <filipemendes@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 14:53:11 by fguerrei          #+#    #+#             */
/*   Updated: 2024/04/16 18:18:25 by filipemende      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	char *str;

	str = (char *)s;
	i = ft_strlen(str);
	while (str[i] >= 0)
	{
		if (str[i] == c)
			return (&str[i]);
		i--;
	}
	if (c == '\0')
		return (&str[i]);
	return (0);
}