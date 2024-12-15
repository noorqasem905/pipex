/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nqasem <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 16:59:07 by nqasem            #+#    #+#             */
/*   Updated: 2024/08/29 16:59:52 by nqasem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*st;
	size_t			i;
	size_t			i1;

	st = (unsigned char *)s;
	i = (ft_strlen((char *)st));
	i1 = i;
	while (i)
	{
		i--;
		st++;
	}
	if ((char)c == '\0')
		return ((char *)st);
	while (i1 && st)
	{
		st--;
		--i1;
		if (*st == (char)c)
			return ((char *)st);
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
size_t	ft_strlen(const char *s)
{
	size_t	i;
	char	*len;

	i = 0;
	len = (char *)s;
	while (len[i++] != '\0')
		;
	return (i - 1);
}

int	main(void)
{
	//char	j[] = "123456789";
	char	k[] = "abfbonjour";

	printf("THE VALUE IS: %s\n", ft_strrchr(k, 'a'));
	printf("THE VALUE IS: %s", strrchr(k, 'a'));
	}
*/
