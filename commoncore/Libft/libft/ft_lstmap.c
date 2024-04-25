/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguerrei <fguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 14:40:43 by fguerrei          #+#    #+#             */
/*   Updated: 2024/04/23 15:15:43 by fguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	t_list	*new_lst;
	t_list 	*new_element;

	if (!lst || !del || !f)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		new_element = ft_lstnew(f(lst->content));
		if(!new_element)
		{
			ft_lstclear(&new_element, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_element);
		lst = lst->next;
	}
	return (new_lst);
}