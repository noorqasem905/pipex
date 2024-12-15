/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nqasem <nqasem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:57:14 by nqasem            #+#    #+#             */
/*   Updated: 2024/12/11 11:46:34 by nqasem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	free_it_now(char **s, char *s2, int emassage)
{
	int	n;

	n = 0;
	if (s2 != NULL)
		free(s2);
	while (s[n])
	{
		free(s[n]);
		n++;
	}
	free(s);
	if (emassage)
		perror("Error");
}

int	get_path(char **ev)
{
	int	i;

	i = 0;
	while (ev[i])
	{
		if (ft_strncmp(ev[i], "PATH=/", 6) == 0)
			break ;
		i++;
	}
	return (i);
}

static void	no_space(int *l, char **m, char **o)
{
	*l = -1;
	*o = "/";
	*m = NULL;
}

char	*check_access(char **paths, char **result)
{
	int		l;
	char	*full_path;
	char	*m;
	char	*o;
	char	*p;

	no_space(&l, &m, &o);
	p = ft_strjoin(o, result[0]);
	while (paths[++l])
	{
		full_path = ft_strjoin(paths[l], p);
		if (access(full_path, F_OK | X_OK) == 0)
		{
			m = strdup(full_path);
			free(full_path);
			break ;
		}
		free(full_path);
	}
	free_it_now(paths, p, 0);
	return (m);
}

int	ft_execve(char *file, char **ev)
{
	char	**result;
	char	**paths;
	char	*m;

	result = ft_split(file, ' ');
	if (!result)
	{
		perror("Error splitting file");
		free(result);
		return (-1);
	}
	paths = ft_split(ev[get_path(ev)] + 5, ':');
	m = check_access(paths, result);
	if (m == NULL)
	{
		free_it_now(result, NULL, 1);
		return (-1);
	}
	if (execve(m, result, ev) == -1)
	{
		free_it_now(result, m, 1);
		return (-1);
	}
	free_it_now(result, m, 0);
	return (0);
}
