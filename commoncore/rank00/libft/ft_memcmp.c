/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguerrei <fguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 10:35:15 by fguerrei          #+#    #+#             */
/*   Updated: 2024/05/01 10:36:02 by fguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	int		cmp;

	if (n == 0)
		return (0);
	i = 0;
	cmp = 0;
	while (i < n)
	{
		if (*(const unsigned char *)s1 != *(const unsigned char *)s2)
		{
			cmp = (*(const unsigned char *)s1) - (*(const unsigned char *)s2);
			break ;
		}
		s1++;
		s2++;
		i++;
	}
	return (cmp);
}
/*int main()
{
	printf("%d\n", ft_memcmp("t\200", "t\0",2));

	printf("%d\n", memcmp("t\200", "t\0",2));
}*/
/* this function works similarly to the strncmp
	memcmp works with bytes strings
	it takes (void *) as parameter
	memcmp will not compare more than n bytes
	if the string are the same, return result will be 0
	if the first different character in s1 is > then in s2, return +
	if the first different character in s2 is > then in s1, return -
*/