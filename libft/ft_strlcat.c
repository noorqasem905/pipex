/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nqasem <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 15:05:08 by nqasem            #+#    #+#             */
/*   Updated: 2024/09/01 15:05:44 by nqasem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	rtr;

	i = 0;
	j = 0;
	rtr = 0;
	while (dst[i] != '\0')
		i++;
	while (src[rtr] != '\0')
		rtr++;
	if (size <= i)
		rtr += size;
	else
		rtr += i;
	while (src[j] != '\0' && (i + 1) < size)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (rtr);
}
/*
#include <stdio.h>

int main(void)
{
    char dst[20] = "Hello, ";
    const char *src = "world!";
    size_t size = 5;

    size_t result = ft_strlcat(dst, src, size);

    printf("Resulting string: %s\n", dst);
    printf("Length of the string that would have been created: %zu\n", result);

    return 0;
}
*/
