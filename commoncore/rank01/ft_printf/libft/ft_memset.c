/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguerrei <fguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:09:49 by fguerrei          #+#    #+#             */
/*   Updated: 2024/04/30 11:17:54 by fguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = s;
	while (n > 0)
	{
		*ptr++ = c;
		n--;
	}
	return (s);
}
/*int main()
{
	char str1[16] = "after is 4dots !";
	
	ft_memset(str1 + 10, '.', 4*sizeof(char));
	printf("memset: %s\n", str1);
}*/
//this function writes n bytes of value c to the string s
//the value of c will be converted to an unsigned char
//we convert the string s to a pointer to unsigned char
//we have to return the first parameter of the function (void *s) string
