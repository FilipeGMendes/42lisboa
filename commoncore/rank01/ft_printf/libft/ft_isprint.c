/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguerrei <fguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 10:34:12 by fguerrei          #+#    #+#             */
/*   Updated: 2024/04/30 10:58:26 by fguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*int main()
{
	printf("alpha:%d\n", ft_isprint('a'));
	printf("digit:%d\n", ft_isprint('3'));
	printf("special char:%d\n", ft_isprint('#'));
	printf("spaces:%d\n", ft_isprint('\n'));

	return 0;
}*/
//function to to check if a character is a printing character
//returns 1 if it is
//returns 0 if it is not