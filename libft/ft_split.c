/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nqasem <nqasem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 22:04:10 by nqasem            #+#    #+#             */
/*   Updated: 2024/12/11 09:48:36 by nqasem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	word_count(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			i++;
		while (*s && *s != c)
			s++;
	}
	return (i);
}

void	free_it(char **str, size_t i)
{
	while (i != 0)
	{
		free(str[i]);
		i--;
	}
	free(str[i]);
	free(str);
}

size_t	word_len(char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
	{
		i++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	i;

	i = 0;
	str = malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!s || !str)
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			str[i] = ft_substr(s, 0, word_len((char *)s, c));
			if (!str[i++])
			{
				free_it(str, i - 1);
				return (NULL);
			}
			s += word_len((char *)s, c);
		}
	}
	str[i] = NULL;
	return (str);
}
/*
int	main(void)
{
	char *str = "Hello world, this is a test";
	char delimiter = ' ';
	char **result;
	int i;

	result = ft_split(str, delimiter);
	if (result == NULL)
	{
		fprintf(stderr, "Error: ft_split failed\n");
		return (1);
	}

	i = 0;
	while (result[i])
	{
		printf("Word %d: %s\n", i, result[i]);
		free(result[i]); // Free each word
		i++;
	}
	free(result); // Free the array of words

	return (0);
}*/
