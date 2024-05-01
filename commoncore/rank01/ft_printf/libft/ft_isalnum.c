/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguerrei <filipe0505mendes@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 10:33:40 by fguerrei          #+#    #+#             */
/*   Updated: 2024/05/01 13:46:57 by fguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
		return (1);
	return (0);
}
/*int main()
{
	printf("alpha:%d\n", ft_isalnum('a'));
	printf("digit:%d\n", ft_isalnum('3'));
	printf("special char:%d\n", ft_isalnum('#'));
	printf("spaces:%d\n", ft_isalnum('\n'));

	return 0;
}*/
/*	function to to check if a character is
	an alphabetical letter 
	or a decimal digit
	returns 1 if it is
	returns 0 if it is not
*/