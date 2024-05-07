/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguerrei <fguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 10:34:57 by fguerrei          #+#    #+#             */
/*   Updated: 2024/05/07 14:50:24 by fguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newnode;

	newnode = malloc(sizeof(t_list));
	if (newnode == NULL)
		return (NULL);
	newnode->content = content;
	newnode->next = NULL;
	return (newnode);
}
/*int main()
{
	t_list *list;
	char *str = "qualquer";

	list = ft_lstnew(str);
	printf("%s\n", (char *)list->content);
	
	ft_lstadd_front(&list, ft_lstnew("pode"));
	
	printf("%s\n", (char *)list->content );

	printf("%d\n", ft_lstsize(list));

	ft_lstadd_back(&list, ft_lstnew("coisa"));

	ft_lstclear(&list, free);
	printf("\n%d", ft_lstsize(list));
}*/
/* this function allocates memory
	for a new element of type t_list
	setting its content to be the content parameter
	setting the next variable to NULL
	returns the new element of the list
*/