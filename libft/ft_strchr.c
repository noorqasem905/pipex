/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nqasem <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 20:03:00 by nqasem            #+#    #+#             */
/*   Updated: 2024/08/28 20:06:53 by nqasem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	cca;

	cca = (char)c;
	while (*s != '\0' && *s != cca)
	{
		s++;
	}
	if (*s == cca)
		return ((char *)s);
	return (NULL);
}
/*
#include <stdio.h>
int	main(void)
{
	//char	j[] = "abc";
	char	k[] = "abcdcl";

	printf("THE VALUE IS: %s", ft_strchr(k, 'd'));
	//printf("THE VALUE IS: %s", strchr(k, 'd'));
	//      printf("THE VALUE IS: %d \n",++d);
}*/
