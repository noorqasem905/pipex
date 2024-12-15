/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nqasem <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 15:32:43 by nqasem            #+#    #+#             */
/*   Updated: 2024/09/07 15:49:43 by nqasem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*char test_function(unsigned int index, char c)
{
    if (index % 2 == 0)
        return c - 32; // Assuming ASCII, converting to uppercase
    else
        return c + 32; // Assuming ASCII, converting to lowercase
}*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		len;
	char	*str;

	i = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[len] = '\0';
	return (str);
}
/*
#include <stdio.h>
int main(void)
{
    char str[] = "ABCD";
    char *result;

    result = ft_strmapi(str, test_function);
    if (result)
    {
        printf("Original string: %s\n", str);
        printf("Transformed string: %s\n", result);
    }
    return 0;
}
*/
