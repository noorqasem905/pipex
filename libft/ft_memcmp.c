/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nqasem <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 21:13:08 by nqasem            #+#    #+#             */
/*   Updated: 2024/08/28 21:13:33 by nqasem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*st1;
	unsigned char	*st2;

	st1 = (unsigned char *)s1;
	st2 = (unsigned char *)s2;
	while (n)
	{
		if (*st1 != *st2)
			return (*st1 - *st2);
		st1++;
		st2++;
		n--;
	}
	if (n)
		return (*st1 - *st2);
	return (0);
}
/*       #include <string.h>

#include <stdio.h>
int	main(void)
{
	char	j[] = "aav";
	char	k[] = "aa";

	printf("THE VALUE IS: %d\n", ft_memcmp(j, k,3));
	printf("THE VALUE IS: %d", memcmp(j, k, 3));
	//      printf("THE VALUE IS: %d \n",++d);
}*/
