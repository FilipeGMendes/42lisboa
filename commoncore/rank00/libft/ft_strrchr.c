/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguerrei <fguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 14:53:11 by fguerrei          #+#    #+#             */
/*   Updated: 2024/05/20 15:36:59 by fguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = (int)ft_strlen(s) + 1;
	while (i--)
		if (*(s + i) == (char)c)
			return ((char *)s + i);
	return (NULL);
}
/*int main()
{
	printf("%s\n", ft_strrchr("abacacte",'c'));

	printf("%s\n", strrchr("abacacte", 'c'));
}*/
/*	the function does the same as strchr,
	but locates the last occurrence of the character
*/