/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nqasem <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 10:01:22 by nqasem            #+#    #+#             */
/*   Updated: 2024/12/11 10:01:24 by nqasem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <fcntl.h>
# include <stdio.h>
# include <stddef.h> 
# include <stdlib.h>
# include <string.h>
# include <sys/types.h>
# include <sys/wait.h>
# include <unistd.h>

size_t	ft_strlen(const char *s);
size_t	word_len(char *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strdup(const char *s);
char	*ft_strjoin(char *s1, char *s2);
char	*check_access(char **paths, char **result);
char	**ft_split(char const *s, char c);
char	*ft_strjoin(char *s1, char *s2);
int		word_count(char const *s, char c);
int		ft_execve(char *file, char **ev);
int		get_path(char **ev);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_execve(char *file, char **ev);
void	free_it_now(char **s, char *s2, int emassage);
void	error_message(void);
#endif
