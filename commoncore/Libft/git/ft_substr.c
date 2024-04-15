/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguerrei <fguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 20:33:55 by filipemende       #+#    #+#             */
/*   Updated: 2024/04/15 11:01:12 by fguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
	size_t j;
	char *subs;
	
	subs = malloc(sizeof(char) * (len + 1));
	i = 0;
	j = 0;
	while (j < len)
	{
		subs[j] = s[i + start];
		i++;
		j++;
	}
	if (subs == NULL)
		return (NULL);
	return (subs);
}