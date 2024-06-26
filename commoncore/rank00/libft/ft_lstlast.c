/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguerrei <fguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 11:07:19 by fguerrei          #+#    #+#             */
/*   Updated: 2024/05/01 11:34:40 by fguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*lastnode;

	if (!lst)
		return (NULL);
	while (lst)
	{
		lastnode = lst;
		lst = lst->next;
	}
	return (lastnode);
}
/* this function returns
	the last element of the list
*/