/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nqasem <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 21:08:08 by nqasem            #+#    #+#             */
/*   Updated: 2024/08/28 21:10:40 by nqasem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char	*st;

	st = (unsigned char *)s;
	while (n)
	{
		if ((unsigned char)c == *st)
			return ((void *)st);
		st++;
		n--;
	}
	return (NULL);
}
/*
    #include <string.h>
#include <stdio.h>
int	main(void)
{
	//char	j[] = "123456789";
	char	k[] = "npgrgofdg";

	printf("THE VALUE IS: %s\n", (char*)ft_memchr(k, 'o',6));
	printf("THE VALUE IS: %s", (char*)memchr(k, 'o',6));
	//      printf("THE VALUE IS: %d \n",++d);
}*/
