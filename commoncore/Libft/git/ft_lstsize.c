/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguerrei <fguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 11:01:10 by fguerrei          #+#    #+#             */
/*   Updated: 2024/04/23 11:05:43 by fguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
	t_list *temp;
	int	i;

	temp = lst;
	i = 0;
	while(temp)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}