/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filipemendes <filipemendes@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 16:04:21 by filipemende       #+#    #+#             */
/*   Updated: 2024/04/14 16:23:37 by filipemende      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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