/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shomami <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 15:56:20 by shomami           #+#    #+#             */
/*   Updated: 2018/04/16 20:59:51 by shomami          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

//#include "libft.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>


# define BUFF_SIZE 32

int get_next_line(const int fd, char **line);
char	*ft_strjoin(char const *s1, char const *s2);
void	ft_putchar(char c);
char	*ft_strnew(size_t size);
char    *ft_strsub(char const *s, unsigned int start, size_t len);
size_t      ft_strlen(const char *str);
#endif
