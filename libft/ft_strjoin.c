/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nqasem <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 19:49:17 by nqasem            #+#    #+#             */
/*   Updated: 2024/09/01 20:38:25 by nqasem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*str1;
	unsigned int	i;
	unsigned int	k;

	if (!s1 && !s2)
		return (ft_strdup(""));
	if (!s1 && s2)
		return (ft_strdup(s2));
	if (s1 && !s2)
		return (ft_strdup(s1));
	i = 0;
	k = 0;
	str1 = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!str1)
		return (0);
	while (s1[i])
	{
		str1[i] = s1[i];
		i++;
	}
	while (s2[k])
		str1[i++] = s2[k++];
	str1[i] = '\0';
	return (str1);
}
/*
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	char	*st1;
	char	*st2;
	char	*result;

	st1 = "abvdr";
	st2 = "1234";
	printf("%s\n", ft_strjoin(st1, st2));
}*/
