/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nqasem <nqasem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 19:43:25 by nqasem            #+#    #+#             */
/*   Updated: 2024/09/08 21:08:31 by nqasem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		counter;
	t_list	*temp;

	while (!lst)
		return (0);
	counter = 1;
	temp = (t_list *)lst;
	while (temp->next != NULL)
	{
		temp = temp->next;
		counter++;
	}
	return (counter);
}
