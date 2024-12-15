/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nqasem <nqasem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 21:09:38 by nqasem            #+#    #+#             */
/*   Updated: 2024/09/03 18:12:35 by nqasem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*checkzero(void)
{
	char	*str;

	str = (char *)malloc((2));
	if (!str)
		return (0);
	str[0] = '0';
	str[1] = '\0';
	return (str);
}

int	getlength(long num)
{
	int	i;

	i = 0;
	if (num < 0)
	{
		i++;
		num *= -1;
	}
	while (num > 0)
	{
		num = num / 10;
		i++;
	}
	return (i);
}

int	check(long n)
{
	if (n < 0)
	{
		return (1);
	}
	return (0);
}

char	*ft_itoa(int n1)
{
	int		len;
	char	*str;
	long	n;

	n = n1;
	if (n == 0)
		return (checkzero());
	len = getlength(n);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (0);
	str[len--] = '\0';
	if (check(n))
	{
		n *= -1;
		str[0] = '-';
	}
	while (n > 0)
	{
		str[len] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
	return (str);
}
/* 
int	main(void)
{
	char *str = ft_itoa(0);

	printf("%s", str);
	return (0);
} */
