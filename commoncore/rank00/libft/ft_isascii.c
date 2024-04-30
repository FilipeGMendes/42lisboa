/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguerrei <fguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 10:33:55 by fguerrei          #+#    #+#             */
/*   Updated: 2024/04/30 10:55:48 by fguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*int main()
{
	printf("alpha:%d\n", ft_isascii('a'));
	printf("digit:%d\n", ft_isascii('3'));
	printf("special char:%d\n", ft_isascii('#'));
	printf("spaces:%d\n", ft_isascii('\n'));

	return 0;
}*/
//function to to check if a character is an ASCII character
//returns 1 if it is
//returns 0 if it is not