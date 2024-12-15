/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nqasem <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 15:57:23 by nqasem            #+#    #+#             */
/*   Updated: 2024/09/07 16:08:54 by nqasem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*void test_function(unsigned int index, char *c)
{
    if (index % 2 == 0)
        *c = *c - 32; // Convert to uppercase
    else
        *c = *c + 32; // Convert to lowercase
}
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;
	int	len;

	len = ft_strlen(s);
	i = 0;
	if (!s || !f)
		return ;
	while (i < len)
	{
		f(i, &s[i]);
		i++;
	}
}
/*
int main(void)
{
    char str[] = "hello world";

    ft_striteri(str, test_function);

    return 0;
}*/
