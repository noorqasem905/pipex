/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nqasem <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 15:04:23 by nqasem            #+#    #+#             */
/*   Updated: 2024/09/01 15:04:51 by nqasem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*l;

	l = malloc(n * size);
	if (!l)
	{
		return (NULL);
	}
	ft_bzero(l, n * size);
	return (l);
}
/*
int main(void)
{
	size_t num_elements = 10;
	size_t element_size = sizeof(int);

	int *array = (int *)ft_calloc(num_elements, element_size);
	for (size_t i = 0; i < num_elements; ++i)
	{
		printf("array[%zu] = %d\n", i, array[i]);
	}
	return 0;
}*/
