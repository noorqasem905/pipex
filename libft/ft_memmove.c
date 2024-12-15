/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nqasem <nqasem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 18:25:56 by nqasem            #+#    #+#             */
/*   Updated: 2024/09/01 14:15:42 by nqasem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*st1;
	char		*st2;

	st1 = (char *)dest;
	st2 = (char *)src;
	if (st1 > st2)
	{
		while (n-- > 0)
			st1[n] = st2[n];
	}
	else
	{
		ft_memcpy(dest, src, n);
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void){
char f[7] ="adfafgf";
char k[] ="123456";

printf("%s\n", (char *)ft_memmove(f, k ,7));
printf("%s\n", (char *)memmove(f, k ,7));
}

		void *memmove(void *dest, const void *src, size_t n);

*/
