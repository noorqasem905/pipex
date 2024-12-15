/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nqasem <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 15:03:32 by nqasem            #+#    #+#             */
/*   Updated: 2024/09/01 15:06:02 by nqasem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dst;
	size_t	len;
	size_t	i;

	len = ft_strlen(s) + 1;
	dst = malloc(len);
	i = 0;
	if (!dst)
	{
		return (NULL);
	}
	while (i < len)
	{
		dst[i] = s[i];
		i++;
	}
	return (dst);
}
