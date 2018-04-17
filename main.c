/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shomami <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 16:28:28 by shomami           #+#    #+#             */
/*   Updated: 2018/04/17 13:58:34 by shomami          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int		fd;
	char *line;

	if (argc > 1)
	{
		fd = open(argv[1], O_RDONLY);
	   	get_next_line(fd, &line);
		printf("%s", line);
	   	get_next_line(fd, &line);
		printf("%s", line);
		close(fd);
	}
	//sleep(1000);
	return (0);
}

