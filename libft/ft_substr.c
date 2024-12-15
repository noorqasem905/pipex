/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nqasem <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 15:12:47 by nqasem            #+#    #+#             */
/*   Updated: 2024/09/01 15:43:14 by nqasem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	start1;
	size_t	i;
	size_t	size;

	size = ft_strlen(s);
	start1 = start;
	i = 0;
	if (start > size)
	{
		str = (char *)malloc(1);
		if (str == NULL)
			return (NULL);
		str[i] = '\0';
		return (str);
	}
	if (len > (size - start))
		len = size - start;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!s || !str)
		return (0);
	while (i < len && start1 < size)
		str[i++] = s[start1++];
	str[i] = '\0';
	return (str);
}
/*
// check if there is place in the memory in str will not open 
//if the temp has addrace he find place
int	main(void) {
	char str[] = "abcdefg dfs";
	unsigned int start = 8;
	size_t len = 3;

	//char *substr = ft_substr(str, start, len);
   char *substr = ft_substr(str, start, len);
		printf("Substring: %s\n", substr);


	return (0);
}
*/
