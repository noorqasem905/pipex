/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nqasem <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 17:00:56 by nqasem            #+#    #+#             */
/*   Updated: 2024/08/29 17:01:31 by nqasem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	unsigned int	i;

	str1 = (unsigned char *)src;
	str2 = (unsigned char *)dest;
	i = 0;
	if (!dest && !src)
		return (0);
	while (i < n)
	{
		str2[i] = str1[i];
		i++;
	}
	return (dest);
}
/*#include <stdio.h>

// Declaration of your custom ft_memcpy function
void *ft_memcpy(void *dest, const void *src, size_t n);

int main()
{
    // Source and destination arrays
    char src[] = "Hello, World!";
    char dest[50]; // Ensure the destination array is large enough

    // Print the source and destination arrays before memcpy
    printf("Source before memcpy: %s\n", src);
    printf("Destination before memcpy: %s\n", dest);

    // Perform the memory copy
    ft_memcpy(dest, src, sizeof(src));
 	ft_memcpy(((void*)0), ((void*)0), 3);
    // Print the source and destination arrays after memcpy
    printf("Source after memcpy: %s\n", src);
    printf("Destination after memcpy: %s\n", dest);

    return 0;
}*/
