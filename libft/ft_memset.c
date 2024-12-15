/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nqasem <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 16:21:58 by nqasem            #+#    #+#             */
/*   Updated: 2024/08/28 16:30:06 by nqasem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*st;

	st = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		*(st + i) = (unsigned char)c;
		i++;
	}
	return (s);
}
/*
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
int main(void) {

    char buffer[50];

    ft_strcpy(buffer, "Hello, world!");
    printf("Before memset: %s\n", buffer);


    ft_memset(buffer, 'X', 5);
    printf("After ft_memset: %s\n", buffer);
    return 0;
}*/
