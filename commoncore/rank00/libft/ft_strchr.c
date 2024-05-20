/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguerrei <fguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 13:35:58 by fguerrei          #+#    #+#             */
/*   Updated: 2024/05/20 15:43:46 by fguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (0);
}
/*int main()
{
	printf("%s\n", ft_strchr("abacate",'c'));

	printf("%s\n", strchr("abacate", 'c'));
}*/
/*	this function searches for one character in a string
	if the characters if found
	it returns a pointer to the first occurrence of the specific character
*/