/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filipemendes <filipemendes@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 11:18:49 by filipemende       #+#    #+#             */
/*   Updated: 2024/04/13 12:01:04 by filipemende      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int 	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;
	int cmp;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n)
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