/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shomami <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 15:57:15 by shomami           #+#    #+#             */
/*   Updated: 2018/04/12 11:58:14 by shomami          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static	int	read_file(int fd,char **line,char *content)
{
	int ret;


 int get_next_line(const int fd, char **line)
{
	char buf[BUFF_SIZE + 1]:
	int ret;
	static char *str;

	while ((ret = read(fd, buf, BUFF_SIZE))
	{
		if(ret < 0 || fd < 0 || line == NULL)
			return (-1);
		buf[ret] = '\0';
		if ((
