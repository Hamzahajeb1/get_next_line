/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haji <hel-haji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 22:17:12 by hel-haji          #+#    #+#             */
/*   Updated: 2024/01/06 23:35:22 by hel-haji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_str(char *s)
{
	int		i;
	char	*str;

	i = 0;
	if (!s[i])
		return (NULL);
	while (s[i] && s[i] != '\n')
		i++;
	str = malloc(sizeof(char) * i + 2);
	if (!str)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != '\n')
	{
		str[i] = s[i];
		i++;
	}
	if (s[i] == '\n')
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*new_line(char *s)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	while (s[i] && s[i] != '\n')
		i++;
	if (!s[i])
	{
		free(s);
		return (NULL);
	}
	str = malloc(sizeof(char) * (ft_strlen(s) - i) + 1);
	if (!str)
		return (NULL);
	i++;
	j = 0;
	while (s[i])
		str[j++] = s[i++];
	str[j] = '\0';
	free(s);
	return (str);
}

char	*ft_rfile(int fd, char *s)
{
	int		r;
	char	*buf;

	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);
	r = 1;
	while (!ft_strchr(s, '\n') && r != 0)
	{
		r = read(fd, buf, BUFFER_SIZE);
		if (r == -1)
		{
			free(buf);
			free(s);
			return (NULL);
		}
		buf[r] = '\0';
		s = ft_strjoin(s, buf);
	}
	free(buf);
	return (s);
}

char	*get_next_line(int fd)
{
	static char		*s;
	char			*buf;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	s = ft_rfile(fd, s);
	if (!s)
		return (NULL);
	buf = get_str(s);
	s = new_line(s);
	return (buf);
}
