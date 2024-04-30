/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguerrei <fguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 10:34:01 by fguerrei          #+#    #+#             */
/*   Updated: 2024/04/30 10:52:54 by fguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*int main()
{
	printf("alpha:%d\n", ft_isdigit('a'));
	printf("digit:%d\n", ft_isdigit('3'));
	printf("special char:%d\n", ft_digit('#'));
	printf("spaces:%d\n", ft_digit('\n'));

	return 0;
}*/
//function to to check if a character is a decimal digit (0 - 9)
//returns 1 if it is
//returns 0 if it is not