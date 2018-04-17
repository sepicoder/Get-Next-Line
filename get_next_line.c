/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shomami <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 15:57:15 by shomami           #+#    #+#             */
/*   Updated: 2018/04/17 16:02:19 by shomami          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int error_check(int fd, char **line, char *str)
{
	if (fd < 0 || line == NULL)
		return (-1);
	if (!(str = (char*)malloc(sizeof(char) * (BUFF_SIZE + 1))))
		return (-1);
	return (0);
}

char *read_file(int fd)
{
	char *tmp;
	char buf[BUFF_SIZE + 1];
	int					number_of_bytes_read;
	
	tmp = ft_strnew(1);
	while ((number_of_bytes_read = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[number_of_bytes_read] = '\0';
		tmp = ft_strjoin(tmp, buf);
	}
	return (tmp);
}

char *new_line_out(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
		{
			return(ft_strsub(str, i + 1, (ft_strlen(str) - (i + 1))));
		}
		i++;
	}
	return (0);
}


int get_next_line(const int fd, char **line)
{
	int i;
	static char *str;

	i = 0;
	while (!str)
	{
		str = read_file(fd);
	}
	while (str[i])
	{
		if (str[i] == '\n')
		{
			*line = ft_strsub(str, 0, i);
			str = new_line_out(str);
			break;
		}
	i++;
	}
	return (*line ? 1 : 0);
}
