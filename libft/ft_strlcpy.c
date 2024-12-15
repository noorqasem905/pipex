/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nqasem <nqasem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 19:38:08 by nqasem            #+#    #+#             */
/*   Updated: 2024/09/02 19:05:43 by nqasem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(src);
	if (!src)
		return (0);
	if (!size)
		return (len);
	i = 0;
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char buffer[] = "Hello";
	char buffer1[1];

	printf("%ld\n", ft_strlcpy(buffer1, buffer, sizeof(buffer1)));
	printf("%ld\n", ft_strlcpy3(buffer1, buffer, sizeof(buffer1)));
	printf("%s\n", buffer1);

	return (0);
}*/
