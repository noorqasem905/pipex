/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipx.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nqasem <nqasem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:57:14 by nqasem            #+#    #+#             */
/*   Updated: 2024/11/12 18:55:17 by nqasem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	open_file(char *file, int check)
{
	int		res;

	if (check == 0)
		res = open(file, O_RDONLY, 0777);
	else
		res = open(file, O_WRONLY | O_CREAT | O_TRUNC, 0777);
	if (res == -1)
		perror("Error Opening File");
	return (res);
}

void	parent_file(int *p_fd, char **file, char **enpv)
{
	int		fd;

	fd = open_file(file[4], 1);
	if (fd == -1)
	{
		close(p_fd[1]);
		exit(1);
	}
	dup2(fd, 1);
	dup2(p_fd[0], 0);
	close(fd);
	close(p_fd[1]);
	ft_execve(file[3], enpv);
}

void	child_file(int *p_fd, char **file, char **enpv)
{
	int		fd2;

	fd2 = open_file(file[1], 0);
	if (fd2 == -1)
	{
		close(p_fd[0]);
		exit(2);
	}
	dup2(fd2, 0);
	dup2(p_fd[1], 1);
	close(p_fd[0]);
	close(fd2);
	ft_execve(file[2], enpv);
}

int	main(int argc, char *argv[], char **env)
{
	int		p_fd[2];
	int		id;
	pid_t	f1;
	pid_t	f2;

	if (argc != 5)
	{
		perror("Invalid number of arguments");
		return (-1);
	}
	if (pipe(p_fd) == -1)
		perror("Error in Pipe");
	f1 = fork();
	if (f1 == 0)
		child_file(p_fd, argv, env);
	f2 = fork();
	if (f2 == 0)
		parent_file(p_fd, argv, env);
	close(p_fd[1]);
	close(p_fd[0]);
	id = wait(NULL);
	if ((wait(NULL)) == f1)
		id = f1;
	return (WEXITSTATUS(id));
}
