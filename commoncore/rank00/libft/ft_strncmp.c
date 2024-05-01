/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguerrei <filipe0505mendes@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 10:36:47 by fguerrei          #+#    #+#             */
/*   Updated: 2024/05/01 13:52:07 by fguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		i++;
	}
	return (0);
}
/*int main()
{
	printf("%d\n", ft_strncmp("test\200", "test\0", 6));

	printf("%d\n", strncmp("test\200", "test\0", 6));
}*/
/*the function compares a maximum n characters in both strings
	if the string are the same, return result will be 0
	if the first different character in s1 is greater then in s2,
	return result will be a positive value
	if the first different character in s2 is greater then in s1, 
	return result will be a negative value
*/