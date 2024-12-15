/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nqasem <nqasem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 19:40:34 by nqasem            #+#    #+#             */
/*   Updated: 2024/09/08 20:24:33 by nqasem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list) * 1);
	if (new_node == 0)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
/*

int	main(void)
{
	t_list *list = ft_lstnew("Hello");
	t_list *node = ft_lstnew("World");
	ft_lstadd_back(&list, node);

	printf("List size: %d\n", ft_lstsize(list));
	t_list *last = ft_lstlast(list);
	printf("Last node content: %s\n", (char *)last->content);

	return (0);
}*/