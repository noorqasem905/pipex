/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nqasem <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 16:36:34 by nqasem            #+#    #+#             */
/*   Updated: 2024/08/29 16:37:49 by nqasem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*st1;
	unsigned char	*st2;

	st1 = (unsigned char *)s1;
	st2 = (unsigned char *)s2;
	while (n)
	{
		if (*st1 != *st2 || !*st1 || !*st2)
			return (*st1 - *st2);
		st1++;
		st2++;
		n--;
	}
	if (n)
		return (*st1 - *st2);
	return (0);
}
/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	//char	j[] = "123456789";
	char	k[] = "abfbonjour";

	printf("THE VALUE IS: %d\n", ft_strncmp("path=/hdgasgds", "path=/ho", 8));
 //printf("THE VALUE IS: %d\n", strncmp("atomsa\0\0\0\0", "atoms\0abc", 8));
	}*/
