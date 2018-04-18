/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shomami <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 16:28:28 by shomami           #+#    #+#             */
/*   Updated: 2018/04/18 15:34:40 by shomami          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int		fd;
	char *line;
	int store;

	if (argc > 1)
	{
		fd = open(argv[1], O_RDONLY);
	   	store = get_next_line(fd, &line);
		printf("%s\n", line);
		printf("%d\n", store);
		free(line);
		store = get_next_line(fd, &line);
		printf("%s\n", line);
		printf("%d\n", store);
		store = get_next_line(fd, &line);
		printf("%s\n", line);
		printf("%d\n", store);
		close(fd);
	}
	while(1);
	return (0);
}

