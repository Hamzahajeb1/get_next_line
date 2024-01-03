/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haji <hel-haji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 12:20:19 by hel-haji          #+#    #+#             */
/*   Updated: 2023/12/28 12:20:19 by hel-haji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#define BUFFER_SIZE 42

#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

//utils
char	*ft_strchr(char *s, int c);
char	*ft_strjoin(char *s1, char *s2);
size_t	ft_strlen(char *str);

//main function
char *get_str(char *s);
char *new_line(char *s);
char *ft_rfile(int fd, char *s);
char *get_next_line(int fd);