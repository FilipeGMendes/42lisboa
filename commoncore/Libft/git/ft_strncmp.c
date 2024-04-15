/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguerrei <fguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 11:18:49 by filipemende       #+#    #+#             */
/*   Updated: 2024/04/15 15:59:24 by fguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int 	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;
	int cmp;

	i = 0;																// n = 5
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n)// 0-5 1-5 4-5
		i++;
	if (i == n)
		return (0);
	cmp = s1[i] - s2[i];
	if (cmp > 0)
		return (1);
	if (cmp < 0)
		return (-1);
	return (0);
}