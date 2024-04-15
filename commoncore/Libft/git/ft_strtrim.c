/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguerrei <fguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 13:39:21 by fguerrei          #+#    #+#             */
/*   Updated: 2024/04/15 15:52:59 by fguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int 
		ft_isset(char c, char const *set)
{
	int i;

	i = 0;
	while(set[i])
	{
		if(set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*strtrim(char const *s, char const *set)
{
	
}