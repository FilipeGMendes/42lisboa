/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguerrei <fguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 10:33:48 by fguerrei          #+#    #+#             */
/*   Updated: 2024/04/30 10:51:29 by fguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

/*int main()
{
	printf("alpha:%d\n", ft_isalpha('a'));
	printf("digit:%d\n", ft_isalpha('3'));
	printf("special char:%d\n", ft_isalpha('#'));
	printf("spaces:%d\n", ft_isalpha('\n'));

	return 0;
}*/
//function to to check if a character is an alphabetical letter
//returns 1 if it is
//returns 0 if it is not