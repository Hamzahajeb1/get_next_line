/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haji <hel-haji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 00:00:41 by hel-haji          #+#    #+#             */
/*   Updated: 2024/01/07 00:07:59 by hel-haji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdio.h>
# include <fcntl.h>
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>

//utils
char	*ft_strchr(char *s, int c);
char	*ft_strjoin(char *s1, char *s2);
size_t	ft_strlen(char *str);

//main function
char	*get_str(char *s);
char	*new_line(char *s);
char	*ft_rfile(int fd, char *s);
char	*get_next_line(int fd);

#endif